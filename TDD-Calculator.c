#include "C:\Users\Mazen\Desktop\unity\src\unity.h"
#include "Calculator.h"

void TestAddition(void)
{
TEST_ASSERT_EQUAL_HEX8(40, Addition(30, 40));
TEST_ASSERT_EQUAL_HEX8(40, Addition(10, 70));
TEST_ASSERT_EQUAL_HEX8(33, Addition(33, 33));
}

void TestSubtraktion(void)
{
TEST_ASSERT_EQUAL_HEX8(80, Subtraktion(70, 80));
TEST_ASSERT_EQUAL_HEX8(127, Subtraktion(127, 127));
TEST_ASSERT_EQUAL_HEX8(84, Subtraktion(0, 126));
}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(TestAddition);
RUN_TEST(TestSubtraktion);
return UNITY_END();
}
