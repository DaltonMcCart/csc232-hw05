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
  capacity = rhs.capacity;
}

template <typename ItemType>
bool csc232::ResizableArrayStack<ItemType>::isEmpty() const {
 return top == 0;
}

template <typename ItemType>
bool csc232::ResizableArrayStack<ItemType>::push (const ItemType &newEntry) {

 if (top == capacity){
     ItemType* oldArray = items;
     capacity = capacity * 2;
     items = new ItemType [capacity];

     for (int i = 0; i < top; i++)
     {
         items [i] = oldArray [i];

     }

 }

 items [top] = newEntry;
 top++;

 return true;

}

template <typename ItemType>
csc232::ResizableArrayStack<ItemType> &csc232::ResizableArrayStack<ItemType>::operator=(const csc232::ResizableArrayStack<ItemType> &rhs){
    items = new ItemType [rhs.getCapacity()];
    for (int i = 0; i < top; i++)
        {
            items [i] = rhs.items [i];

        }
        top = rhs.top;
    capacity = rhs.capacity;
    return *this;

}

template <typename ItemType>
bool csc232::ResizableArrayStack<ItemType>::pop () {
 if (isEmpty()){
     return false;
 }
 else {
     top--;
     return true;
 }
}

template <typename ItemType>
ItemType csc232::ResizableArrayStack<ItemType>::peek () const {
 return items [top - 1];
}

template <typename ItemType>
int csc232::ResizableArrayStack<ItemType>::getCapacity()const {
 return capacity;
}

template <typename ItemType>
csc232::ResizableArrayStack<ItemType>::~ResizableArrayStack() {
 delete [] items;
}

template class csc232::ResizableArrayStack<int>;
template class csc232::ResizableArrayStack<long>;
template class csc232::ResizableArrayStack<double>;
template class csc232::ResizableArrayStack<float>;
template class csc232::ResizableArrayStack<std::string>;
template class csc232::ResizableArrayStack<char>;