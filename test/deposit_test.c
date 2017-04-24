#include <iostream>

#include "../thirdparty/ctest.h"
#include "../src/deposit.c"

CTEST(zero, zero_test)
{
	float c=40;
	float p=c/365;
	double s=100000;
	double expected = 101208;
	double result = f2(s,c,p);
	ASSERT_EQUAL (expected, result);
}

CTEST(first, first_test)
{
	float c=40;
    float p=c/365;
    double s=20000;
    double expected = 20175;
    double result = f1(s,c,p);
    ASSERT_EQUAL (expected, result);

}

CTEST(second, second_test)
{
	float c=250;
    float p=c/365;
    double s=100000;
    double expected = s+p*s*0.15;
    double result = f2(s,c,p);
    ASSERT_EQUAL (expected, result);

}

CTEST(third, third_test)
{
	float c=250;
    float p=c/365;
    double s=20000;
    double expected = s+p*s*0.12;
    double result = f1(s,c,p);
    ASSERT_EQUAL (expected, result);

}



