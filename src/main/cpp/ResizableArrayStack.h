/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file   ResizableArrayStack.h
 * @author Dalton McCart <mccart42@live.missouristate.edu>
 * @brief  ResizableArrayStack specification.
 */
#ifndef CSC232_HW05_RESIZABLEARRAYSTACK_H
#define CSC232_HW05_RESIZABLEARRAYSTACK_H

#endif //CSC232_HW05_RESIZABLEARRAYSTACK_H

#include "StackInterface.h"

namespace csc232 {
    template <typename ItemType>
    class ResizableArrayStack : public StackInterface <ItemType> {
    public:

        /**
         * Default Constructor
         */
        explicit ResizableArrayStack();

        /**
         * Copy Constructor
         * @param rhs
         */
        ResizableArrayStack (const ResizableArrayStack& rhs);

       /**
        * Move Constructor
        * @param rhs
        */
        ResizableArrayStack (ResizableArrayStack&& rhs) = delete;


        /**
         * Copy Assignment
         * @param rhs
         * @return
         */
        ResizableArrayStack& operator = (const ResizableArrayStack& rhs);

        /**
         * Move Assignment Operator
         * @param rhs
         * @return
         */
        ResizableArrayStack& operator = (ResizableArrayStack&& rhs) = delete;


        /**
         * Sees whether the stack is empty.
         * @return True if the stack is empty, or false if not.
         */
        bool isEmpty() const;


        /**
         * Adds a new entry to the top of this stack.
         * @param  newEntry The object to be added as a new entry.
         * @return True if the addition is successful or false if not.
         * @post   If the operation was successful, newEntry is at the top of the stack.
         */
        bool push (const ItemType &newEntry);


        /**
        * Removes the top of this stack.
        * @return True if the removal was successful or false if not.
        * @post   If the operation was successful, the top of the stack has been removed.
        */
        bool pop();


        /**
        * Returns a copy of the top of this stack.
        * @return A copy of the top the stack.
        * @post   A copy of the top of the stack has been returned, and the stack is unchanged.
        */
        ItemType peek() const ;

        /**
         * Returns the Size of the Array
         * @param capacity
         * @return
         */
        int getCapacity()  ;

        /**
         * Destroys this stack and frees its assigned memory
         */
       ~ResizableArrayStack();

    private:
        static const int DEFAULT_CAPACITY = 10;
        ItemType* items;
        int top;
        int capacity;


    };
}