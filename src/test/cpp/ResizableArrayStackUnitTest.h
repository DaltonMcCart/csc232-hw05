/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    ResizableArrayStackUnitTest.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: Replace this line with your name and email address using the above format.
 * @brief  TODO: Give a brief description of this module
 */

#ifndef HW05_RESIZABLEARRAYSTACKSOLN_RESIZABLEARRAYSTACKUNITTEST_H
#define HW05_RESIZABLEARRAYSTACKSOLN_RESIZABLEARRAYSTACKUNITTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "StackInterface.h"
#include "ResizableArrayStack.h"

class ResizableArrayStackUnitTest : public CPPUNIT_NS::TestFixture {
private:
CPPUNIT_TEST_SUITE(ResizableArrayStackUnitTest);
        CPPUNIT_TEST(testInitialCapacity);
        CPPUNIT_TEST(testCapacityDoublesPushingToFullStack);
        CPPUNIT_TEST(testCapacityQuadruplesPushingToFullStackTwice);
        CPPUNIT_TEST(testCapacityUsingCopyConstructor);
        CPPUNIT_TEST(testCapacityUsingCopyAssignment);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
     * A method that executes before each unit test executes.
     */
    void setUp() override;

    /**
     * A method that executes after each unit test has executed.
     */
    void tearDown() override;

    /**
     *
     */
    void testInitialCapacity();

    /**
     *
     */
    void testCapacityDoublesPushingToFullStack();

    void testCapacityQuadruplesPushingToFullStackTwice();

    /**
     *
     */
    void testCapacityUsingCopyConstructor();

    /**
     *
     */
    void testCapacityUsingCopyAssignment();

};


#endif //HW05_RESIZABLEARRAYSTACKSOLN_RESIZABLEARRAYSTACKUNITTEST_H
