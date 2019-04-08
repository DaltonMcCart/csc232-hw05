/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    ResizableArrayStackUnitTest.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: Replace this line with your name and email address using the above format.
 * @brief  TODO: Give a brief description of this module
 */

#include "ResizableArrayStackUnitTest.h"
#include <string>

CPPUNIT_TEST_SUITE_REGISTRATION(ResizableArrayStackUnitTest);

void ResizableArrayStackUnitTest::setUp() {
    TestFixture::setUp();
}

void ResizableArrayStackUnitTest::tearDown() {
    TestFixture::tearDown();
}

void ResizableArrayStackUnitTest::testInitialCapacity() {
    csc232::StackInterface<int> *stack  = new csc232::ResizableArrayStack<int>{};
    int expected{10};
    int actual{dynamic_cast<csc232::ResizableArrayStack<int>*>(stack)->getCapacity()};
    std::string message{"Expected initial capacity is incorrect."};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void ResizableArrayStackUnitTest::testCapacityDoublesPushingToFullStack() {
    csc232::StackInterface<int> *stack  = new csc232::ResizableArrayStack<int>{};
    int expected{20};
    for (int i{0}; i < (expected / 2) + 1; ++i) {
        stack->push(i);
    }

    int actual{dynamic_cast<csc232::ResizableArrayStack<int>*>(stack)->getCapacity()};
    std::string message{"Expected doubled capacity is incorrect."};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void ResizableArrayStackUnitTest::testCapacityQuadruplesPushingToFullStackTwice() {
    csc232::StackInterface<int> *stack  = new csc232::ResizableArrayStack<int>{};
    int expected{40};
    for (int i{0}; i < (expected / 2) + 1; ++i) {
        stack->push(i);
    }

    int actual{dynamic_cast<csc232::ResizableArrayStack<int>*>(stack)->getCapacity()};
    std::string message{"Expected quadrupled capacity is incorrect."};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void ResizableArrayStackUnitTest::testCapacityUsingCopyConstructor() {
    csc232::ResizableArrayStack<int> *srcStack = new csc232::ResizableArrayStack<int>{};
    int expected{20};
    for (int i{0}; i < (expected / 2) + 1; ++i) {
        srcStack->push(i);
    }

    csc232::ResizableArrayStack<int> *stack = new csc232::ResizableArrayStack<int>{*srcStack};
    int actual{stack->getCapacity()};
    std::string message{"Expected copied (constructor) capacity is incorrect."};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void ResizableArrayStackUnitTest::testCapacityUsingCopyAssignment() {
    csc232::ResizableArrayStack<int> srcStack{};
    int expected{20};
    for (int i{0}; i < (expected / 2) + 1; ++i) {
        srcStack.push(i);
    }

    csc232::ResizableArrayStack<int> stack;
    stack = srcStack;
    int actual{stack.getCapacity()};
    std::string message{"Expected copied (assignment) capacity is incorrect."};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}
