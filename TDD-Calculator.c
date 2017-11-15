#include "C:\Users\Mazen\Desktop\unity\src\unity.h"
#include "Calculator.h"

void TestAddition(void)
{
TEST_ASSERT_EQUAL_FLOAT(70.9, Addition(30.5, 40.4));
TEST_ASSERT_EQUAL_FLOAT(80, Addition(10, 70));
TEST_ASSERT_EQUAL_FLOAT(66, Addition(33, 33));
}

void TestSubtraktion(void)
{
TEST_ASSERT_EQUAL_FLOAT(10, Subtraktion(90, 80));
TEST_ASSERT_EQUAL_FLOAT(0, Subtraktion(127, 127));
TEST_ASSERT_EQUAL_FLOAT(-126, Subtraktion(0, 126));
}


void TestMultiplikation(void)
{
TEST_ASSERT_EQUAL_FLOAT(2, Multiplikation(10, 0.2));
TEST_ASSERT_EQUAL_FLOAT(700, Multiplikation(10, 70));
TEST_ASSERT_EQUAL_FLOAT(1089, Multiplikation(33, 33));
}

void TestDivision(void)
{
TEST_ASSERT_EQUAL_FLOAT(3.33333, Division(10, 3));
TEST_ASSERT_EQUAL_FLOAT(20, Division(180, 9));
TEST_ASSERT_EQUAL_FLOAT(2.5, Division(10, 4));
}



int main(void)
{
UNITY_BEGIN();
RUN_TEST(TestAddition);
RUN_TEST(TestSubtraktion);
RUN_TEST(TestMultiplikation);
RUN_TEST(TestDivision);
return UNITY_END();
}
