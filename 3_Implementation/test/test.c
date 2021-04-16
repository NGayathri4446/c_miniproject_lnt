#include "unity.h"
#include "prototypes.h"

#include <prototypes.h>
#define PROJ_NAME = "student"



/* Prototypes for all the test functions */
void test_name(void);
void test_file(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_name);
  RUN_TEST(test_file);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */
void test_name(void) {
  TEST_ASSERT_EQUAL(1, isNameValid("rajini"));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, isNameValid("raj4"));
}

void test_file(void) {

  TEST_ASSERT_EQUAL(0, isFileExists("rb"));


  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, isFileExists("wb"));
}


