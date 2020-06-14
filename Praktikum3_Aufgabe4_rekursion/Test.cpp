//#define BOOST_TEST_MODULE mytests
//#include <boost/test/included/unit_test.hpp>
//#include "Numbers.h"
//
//
//BOOST_AUTO_TEST_CASE(myFirstTestCase)
//{
//    Numbers numbersList({ 3, 7 }, 2);
//    int index = numbersList.getIndex() - 1;
//    double rslt{};
//
//    double result{ numbersList.result(index, rslt) };
//    assert(result == 10);
//
//} 
//
//BOOST_AUTO_TEST_CASE(mySecondTestCase)
//{
//    Numbers numbersList({ 3, 7, 10 }, 3);
//    int index = numbersList.getIndex() - 1;
//    double rslt{};
//
//    double result{ numbersList.result(index, rslt) };
//    assert(result == 20);
//}
//
//BOOST_AUTO_TEST_CASE(myThirdTestCase)
//{
//    Numbers numbersList({ 3, 7, -10 }, 3);
//    int index = numbersList.getIndex() - 1;
//    double rslt{};
//
//    double result{ numbersList.result(index, rslt) };
//    assert(result == 0);
//}
//
//BOOST_AUTO_TEST_CASE(myFourthTestCase)
//{
//    Numbers numbersList({ 3, 7, 10.02 }, 3);
//    int index = numbersList.getIndex() - 1;
//    double rslt{};
//
//    double result{ numbersList.result(index, rslt) };
//    assert(result == 20.02);
//}
//
//BOOST_AUTO_TEST_CASE(myFivthTestCase)
//{
//    Numbers numbersList({ 3, 7, 10.02 }, 2);
//    int index = numbersList.getIndex() - 1;
//    double rslt{};
//
//    double result{ numbersList.result(index, rslt) };
//    assert(result == 10);
//}
//
////QUESTION TO PROF: HOW TO ASSERT AN ERROR?
////BOOST_AUTO_TEST_CASE(mySixthTestCase)
////{
////    Numbers numbersList({ 3, 7, 10.02 }, 5);
////    double result{ numbersList.result() };
////    assert(result == -1);
////}