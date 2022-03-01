#include "unity.h"
#include "calculator.h"


void setUp()
{
     
}
void tearDown()
{

}
void test_addition(void)
{
    TEST_ASSERT_EQUALS_FLOAT(5,addition(2,3));
}
int test_main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_addition);

    return UNITY_END();


}