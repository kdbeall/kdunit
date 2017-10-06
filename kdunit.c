#include "kdunit.h"

int TEST_SUCCESS = 0;
int TEST_FAILURE = 0;

int TEST_GROUP_SUCCESS = 0;
int TEST_GROUP_FAILURE = 0;

void kdAssertInit(const char *message){
  fprintf(stderr, "\nBEGIN TESTS %s\n", message);
}

void kdAssertFinish(){
  fprintf(stderr, "\nTEST RESULTS\n  SUCCESSES %i\n  FAILURES %i\n\n", TEST_SUCCESS, TEST_FAILURE);
}

void kdAssertInitGroup(const char *group_name){
  fprintf(stderr, "\nBEGIN %s\n", group_name);
}

void kdAssertFinishGroup(){
  fprintf(stderr, "\nTEST GROUP RESULTS\n  SUCCESSES %i\n  FAILURES %i\n", TEST_GROUP_SUCCESS, TEST_GROUP_FAILURE);
  TEST_GROUP_SUCCESS = 0;
  TEST_GROUP_FAILURE = 0;
}

void kdAssert(const bool val, const char *message)
{
  if(!val){
    fprintf(stderr, "  FAILURE %s\n", message);
    TEST_FAILURE += 1;
    TEST_GROUP_FAILURE += 1;
  }else {
    TEST_SUCCESS += 1;
    TEST_GROUP_SUCCESS += 1;
  }
}

void kdAssertTrue(const bool val, const char *message){
  kdAssert(val, message);
}

void kdAssertFalse(const bool val, const char *message){
  kdAssert(!val, message);
}

void kdAssertNull(const void *p, const char *message)
{
  kdAssert(p == NULL, message);
}

void kdAssertNotNull(const void *p, const char *message)
{
  kdAssert(p != NULL, message);
}

void kdAssertStringEquals(const char *expected, const char *actual, const char *message)
{
  kdAssert(strcmp(expected,actual)==0, message);
}

void kdAssertDoubleEquals(const double expected, const double actual, const double delta, const char *message)
{
  kdAssert(fabs(expected - actual) <= delta, message);
}

void kdAssertFloatEquals(const float expected, const float actual, const float delta, const char *message)
{
  kdAssert(fabs(expected - actual) <= delta, message);
}

void kdAssertLongEquals(const long expected, const long actual, const char *message)
{
  kdAssert(expected==actual, message);
}

void kdAssertIntEquals(const int expected, const int actual, const char *message)
{
  kdAssert(expected==actual, message);
}

void kdAssertShortEquals(const short expected, const short actual, const char *message)
{
  kdAssert(expected==actual, message);
}

void kdAssertCharEquals(const char expected, const char actual, const char *message)
{
  kdAssert(expected==actual, message);
}
