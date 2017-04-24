#include <iostream>

#include "../thirdparty/ctest.h"
#include "../src/deposit.h"

CTEST(zerot, zerot_test)
{
    float c=40;
    double s=100000;
    int expected = 0;
    int result = f3(s,c);
    ASSERT_DBL_NEAR (expected, result);
}

CTEST(firstt, firstt_test)
{
    float c=400;
    double s=20000;
    double expected = 1;
    int result = f3(s,c);
    ASSERT_DBL_NEAR (expected, result);

}

CTEST(secondt, secondt_test)
{
    float c=250;
    double s=1000;
    int expected = 1;
    int result = f3(s,c);
    ASSERT_DBL_NEAR (expected, result);

}

CTEST(thirdt, thirdt_test)
{
    float c=-250;
    double s=20000;
    int expected = 1;
    int result = f3(s,c);
    ASSERT_DBL_NEAR (expected, result);
}