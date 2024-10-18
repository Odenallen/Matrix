/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "mytest.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "mytest.h", 6, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testDefaultConst : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDefaultConst() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 9, "testDefaultConst" ) {}
 void runTest() { suite_MyTestSuite.testDefaultConst(); }
} testDescription_suite_MyTestSuite_testDefaultConst;

static class TestDescription_suite_MyTestSuite_testSquareMatrix : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSquareMatrix() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 19, "testSquareMatrix" ) {}
 void runTest() { suite_MyTestSuite.testSquareMatrix(); }
} testDescription_suite_MyTestSuite_testSquareMatrix;

static class TestDescription_suite_MyTestSuite_testMatrixConstSpecified : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMatrixConstSpecified() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 48, "testMatrixConstSpecified" ) {}
 void runTest() { suite_MyTestSuite.testMatrixConstSpecified(); }
} testDescription_suite_MyTestSuite_testMatrixConstSpecified;

static class TestDescription_suite_MyTestSuite_testCopyConst : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCopyConst() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 70, "testCopyConst" ) {}
 void runTest() { suite_MyTestSuite.testCopyConst(); }
} testDescription_suite_MyTestSuite_testCopyConst;

static class TestDescription_suite_MyTestSuite_testCopyAssignmentOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCopyAssignmentOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 101, "testCopyAssignmentOperator" ) {}
 void runTest() { suite_MyTestSuite.testCopyAssignmentOperator(); }
} testDescription_suite_MyTestSuite_testCopyAssignmentOperator;

static class TestDescription_suite_MyTestSuite_testAssignmentMoveOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAssignmentMoveOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 155, "testAssignmentMoveOperator" ) {}
 void runTest() { suite_MyTestSuite.testAssignmentMoveOperator(); }
} testDescription_suite_MyTestSuite_testAssignmentMoveOperator;

static class TestDescription_suite_MyTestSuite_testMoveOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMoveOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 188, "testMoveOperator" ) {}
 void runTest() { suite_MyTestSuite.testMoveOperator(); }
} testDescription_suite_MyTestSuite_testMoveOperator;

static class TestDescription_suite_MyTestSuite_testInitializerList : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInitializerList() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 208, "testInitializerList" ) {}
 void runTest() { suite_MyTestSuite.testInitializerList(); }
} testDescription_suite_MyTestSuite_testInitializerList;

static class TestDescription_suite_MyTestSuite_testRows : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRows() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 217, "testRows" ) {}
 void runTest() { suite_MyTestSuite.testRows(); }
} testDescription_suite_MyTestSuite_testRows;

static class TestDescription_suite_MyTestSuite_testCols : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testCols() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 229, "testCols" ) {}
 void runTest() { suite_MyTestSuite.testCols(); }
} testDescription_suite_MyTestSuite_testCols;

static class TestDescription_suite_MyTestSuite_testGetOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testGetOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 244, "testGetOperator" ) {}
 void runTest() { suite_MyTestSuite.testGetOperator(); }
} testDescription_suite_MyTestSuite_testGetOperator;

static class TestDescription_suite_MyTestSuite_testSetOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSetOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 259, "testSetOperator" ) {}
 void runTest() { suite_MyTestSuite.testSetOperator(); }
} testDescription_suite_MyTestSuite_testSetOperator;

static class TestDescription_suite_MyTestSuite_testMultOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMultOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 287, "testMultOperator" ) {}
 void runTest() { suite_MyTestSuite.testMultOperator(); }
} testDescription_suite_MyTestSuite_testMultOperator;

static class TestDescription_suite_MyTestSuite_testPlusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testPlusOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 322, "testPlusOperator" ) {}
 void runTest() { suite_MyTestSuite.testPlusOperator(); }
} testDescription_suite_MyTestSuite_testPlusOperator;

static class TestDescription_suite_MyTestSuite_testMinusOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMinusOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 352, "testMinusOperator" ) {}
 void runTest() { suite_MyTestSuite.testMinusOperator(); }
} testDescription_suite_MyTestSuite_testMinusOperator;

static class TestDescription_suite_MyTestSuite_testMultEqualsOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMultEqualsOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 379, "testMultEqualsOperator" ) {}
 void runTest() { suite_MyTestSuite.testMultEqualsOperator(); }
} testDescription_suite_MyTestSuite_testMultEqualsOperator;

static class TestDescription_suite_MyTestSuite_testPlusEqualsOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testPlusEqualsOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 396, "testPlusEqualsOperator" ) {}
 void runTest() { suite_MyTestSuite.testPlusEqualsOperator(); }
} testDescription_suite_MyTestSuite_testPlusEqualsOperator;

static class TestDescription_suite_MyTestSuite_testMinusEqualOperator : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMinusEqualOperator() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 414, "testMinusEqualOperator" ) {}
 void runTest() { suite_MyTestSuite.testMinusEqualOperator(); }
} testDescription_suite_MyTestSuite_testMinusEqualOperator;

static class TestDescription_suite_MyTestSuite_testOstream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testOstream() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 430, "testOstream" ) {}
 void runTest() { suite_MyTestSuite.testOstream(); }
} testDescription_suite_MyTestSuite_testOstream;

static class TestDescription_suite_MyTestSuite_testIstream : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testIstream() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 444, "testIstream" ) {}
 void runTest() { suite_MyTestSuite.testIstream(); }
} testDescription_suite_MyTestSuite_testIstream;

static class TestDescription_suite_MyTestSuite_testReset : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testReset() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 468, "testReset" ) {}
 void runTest() { suite_MyTestSuite.testReset(); }
} testDescription_suite_MyTestSuite_testReset;

static class TestDescription_suite_MyTestSuite_testIdentity : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testIdentity() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 480, "testIdentity" ) {}
 void runTest() { suite_MyTestSuite.testIdentity(); }
} testDescription_suite_MyTestSuite_testIdentity;

static class TestDescription_suite_MyTestSuite_testInser_row : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInser_row() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 516, "testInser_row" ) {}
 void runTest() { suite_MyTestSuite.testInser_row(); }
} testDescription_suite_MyTestSuite_testInser_row;

static class TestDescription_suite_MyTestSuite_testAppend_Row : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAppend_Row() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 541, "testAppend_Row" ) {}
 void runTest() { suite_MyTestSuite.testAppend_Row(); }
} testDescription_suite_MyTestSuite_testAppend_Row;

static class TestDescription_suite_MyTestSuite_testRemove_row : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemove_row() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 564, "testRemove_row" ) {}
 void runTest() { suite_MyTestSuite.testRemove_row(); }
} testDescription_suite_MyTestSuite_testRemove_row;

static class TestDescription_suite_MyTestSuite_testInsert_column : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInsert_column() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 582, "testInsert_column" ) {}
 void runTest() { suite_MyTestSuite.testInsert_column(); }
} testDescription_suite_MyTestSuite_testInsert_column;

static class TestDescription_suite_MyTestSuite_testAppend_Column : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAppend_Column() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 614, "testAppend_Column" ) {}
 void runTest() { suite_MyTestSuite.testAppend_Column(); }
} testDescription_suite_MyTestSuite_testAppend_Column;

static class TestDescription_suite_MyTestSuite_testRemove_column : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemove_column() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 644, "testRemove_column" ) {}
 void runTest() { suite_MyTestSuite.testRemove_column(); }
} testDescription_suite_MyTestSuite_testRemove_column;

static class TestDescription_suite_MyTestSuite_testBegin : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBegin() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 664, "testBegin" ) {}
 void runTest() { suite_MyTestSuite.testBegin(); }
} testDescription_suite_MyTestSuite_testBegin;

static class TestDescription_suite_MyTestSuite_testEnd : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEnd() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 672, "testEnd" ) {}
 void runTest() { suite_MyTestSuite.testEnd(); }
} testDescription_suite_MyTestSuite_testEnd;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
