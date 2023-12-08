/*
Header file that declares the the Graph class.
*/
#ifndef _GRAPH_H_
#define _GRAPH_H_

#include <vector>
#include <utility>
#include "UnionFind.h"

template<typename T> using Edge = std::pair<T, T>;

template<typename T>
class Graph {

	using Edge = std::pair<T, T>;

private:
	std::vector<T> vertices;
	std::vector<Edge> edges;

public:
	/**
	 * Builds a graph
	 * @param v - the vertices
	 * @param e - the edges
	 */
	Graph(std::vector<T> v, std::vector<Edge> e) :
			vertices(v), edges(e) {
	}

	/**
	 * Adds an edge to the graph
	 * @param e - the edge
	 */
	void addEdge(Edge e) {
		edges.push_back(e);
	};

	/**
	 * Checks if graph contains a cycle
	 * For every edge of the graph, it finds the roots for its x and y
	 * If these roots are equal, return true
	 * If not equal, complete union by rank and return false
	 * @return true if it contains a cycle, otherwise false
	 */
	bool containsCycle();
};

template<typename T>
bool Graph<T>::containsCycle() {
	UnionFind<T> uFind(vertices);
	for (Edge &e : edges) {
		SetUF<T> &xRoot = uFind.find(e.first);
		SetUF<T> &yRoot = uFind.find(e.second);
		if (xRoot == yRoot)
			return true;
		uFind.unionOp(xRoot, yRoot);
	}
	return false;
}

#endif
