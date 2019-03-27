/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file   ResizableArrayStack.cpp
 * @author Dalton McCart <mccart42@live.missouristate.edu>
 * @brief  ResizableArrayStack implementation.
 */

#include "ResizableArrayStack.h"
 template <typename ItemType>
csc232::ResizableArrayStack<ItemType>::ResizableArrayStack () {
 items = new ItemType [DEFAULT_CAPACITY];
 top = 0;
 capacity = DEFAULT_CAPACITY;
}

template <typename ItemType>
csc232::ResizableArrayStack<ItemType>::ResizableArrayStack (const ResizableArrayStack& rhs) {
  items = new ItemType [rhs.getCapacity()];
  for (int i = 0; i < rhs.top; i++)
  {
   items [i] = rhs.items [i];
  }
  top = rhs.top;
}

template <typename ItemType>
csc232::ResizableArrayStack<ItemType>& csc232::ResizableArrayStack<ItemType>::operator = (const ResizableArrayStack& rhs) {
 return 0;
}

template <typename ItemType>
bool csc232::ResizableArrayStack<ItemType>::isEmpty() const {
 return false;
}
template <typename ItemType>
bool csc232::ResizableArrayStack<ItemType>::push (const ItemType &newEntry) {
 return false;
}

template <typename ItemType>
bool csc232::ResizableArrayStack<ItemType>::pop () {
 return false;
}

template <typename ItemType>
ItemType csc232::ResizableArrayStack<ItemType>::peek () const {
 return 0;
}

template <typename ItemType>
int csc232::ResizableArrayStack<ItemType>::getCapacity() {
 return 0;
}

template <typename ItemType>
csc232::ResizableArrayStack<ItemType>::~ResizableArrayStack() {
 delete [] items;
}