/*
Header file that declares the the SetUF class.
*/
#ifndef _SETUF_H_
#define _SETUF_H_

template <typename T>

class SetUF{
public:
  T value;
  unsigned rank;
  SetUF* parent;

/**
 * Sets the value of the node
 * @param v - the value
 */
  SetUF(T v){
    value=v;
    rank=0;
    parent=this;
  }

  /**
   * Copy constructor to create new singleton
   * @param &a - the value to copy
   */
  SetUF(const SetUF &a){
    value = a.value;
    rank = 0;
    parent = this;
  }

  /**
   * Assignment operator to create new singleton
   * @param &a - the value to copy
   */
  SetUF& operator=(const SetUF &a){
    if (this != &a)
    {
      this->value = a.value;
      this->rank = 0;
      this->parent = this;
    }
    return *this;
  }

  /**
   * Conversion function to implicitly cast SetUF object to type T
   */
  operator T () const { return value; }

private:

};

#endif
