/*
Header file that declares the the UnionFind class.
*/
#ifndef _UNIONFIND_H_
#define _UNIONFIND_H_
#include <vector>
#include <iostream>
#include "SetUF.h"

template <typename T>
class UnionFind{
  friend class SetUF<T>;

public:
  /**
   * Sets all singletons to their container sets
   * @param &singletons - the singletons to be added
   */
  UnionFind(const std::vector<T> &singletons){
    for (unsigned int i = 0; i < singletons.size(); i++)
    {
      sets.push_back(singletons.at(i));
    }
  }

  /**
   * Finds the root of the set to which the node belongs to
   * @param node - the node
   */
  SetUF<T>& find(T node){
    int index = 0;
    for (unsigned int i = 0; i < sets.size(); i++)
    {
      SetUF<T> current = sets.at(i);
      bool end = false;
      while (!end)
      {
        if (current.value == node)
        {
          index = i;
          end = true;
        }
        else if (*(current.parent) != current)
          current = *(current.parent);
        else
          end = true;
      }
    }
    if (sets.at(index) != *(sets.at(index).parent))
      sets.at(index).parent = &(find(*(sets.at(index).parent)));
    std::cout << "Node: " << node << " Root: " << *(sets.at(index).parent) << std::endl;
    return *(sets.at(index).parent);
  }

  /**
   * Completes union by rank
   * @param &x, &y - the sets
   */
  void unionOp(SetUF<T> &x, SetUF<T> &y){
    SetUF<T> xRoot = x;
		SetUF<T> yRoot = y;
		SetUF<T> *current = NULL;
		current = &x;
		while (*((*current).parent) != (*current))
		{
			(*current) = *((*current).parent);
		}
		xRoot = (*current);
		current = &y;
		while (*((*current).parent) != (*current))
		{
			(*current) = *((*current).parent);
		}
		yRoot = (*current);
		if (xRoot == yRoot)
		{
			return;
		}
		if (xRoot.rank > yRoot.rank)
		{
			(yRoot.parent) = &xRoot;
		}
		else
		{
			(xRoot.parent) = &yRoot;
		}
		if (xRoot.rank == yRoot.rank)
		{
			xRoot.rank++;
		}
  }

  /**
   * Completes union by rank
   * @param &x, &y - the sets
   */
  void unionOp(T x, SetUF<T> &y){
    SetUF<T> xRoot = find(x);
    SetUF<T> yRoot = NULL;
    SetUF<T> *current = NULL;
    current = &y;
    while (*((*current).parent) != (*current))
    {
      (*current) = *((*current).parent);
    }
    yRoot = (*current);
    if (xRoot == yRoot)
    {
      return;
    }
    if (xRoot.rank > yRoot.rank)
    {
      *(yRoot.parent) = xRoot;
    }
    else
    {
      *(xRoot.parent) = yRoot;
    }
    if (xRoot.rank == yRoot.rank)
    {
      xRoot.rank++;
    }
  }

  /**
   * Completes union by rank
   * @param x, y - the sets
   */
  void unionOp(SetUF<T> &x, T y){
    SetUF<T> xRoot = NULL;
		SetUF<T> yRoot = find(y);
		SetUF<T> *current = NULL;
		current = &x;
		while (*((*current).parent) != (*current))
		{
			(*current) = *((*current).parent);
		}
		xRoot = (*current);
		if (xRoot == yRoot)
		{
			return;
		}
		if (xRoot.rank > yRoot.rank)
		{
			*(yRoot.parent) = xRoot;
		}
		else
		{
			*(xRoot.parent) = yRoot;
		}

		if (xRoot.rank == yRoot.rank)
		{
			xRoot.rank++;
		}
  }

  /**
   * Completes union by rank
   * @param x, y - the sets
   */
  void unionOp(T x, T y){
    SetUF<T> xRoot = find(x);
		SetUF<T> yRoot = find(y);
		if (xRoot == yRoot)
		{
			return;
		}
		if (xRoot.rank > yRoot.rank)
		{
			*(yRoot.parent) = xRoot;
		}
		else
		{
			*(xRoot.parent) = yRoot;
		}
		if (xRoot.rank == yRoot.rank)
		{
			xRoot.rank++;
		}
  }

private:
  std::vector<SetUF<T>> sets;
};

#endif
