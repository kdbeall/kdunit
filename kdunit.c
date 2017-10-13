#include "kdunit.h"

void kdAssert(const bool val, const char *fileName, const int lineNum)
{
  if(!val){
    fprintf(stderr, "Assertion failure: %s: %i\n", fileName, lineNum);
    exit(0);
  }
}

void kdAssertNull(const void *p, const char *fileName, const int lineNum)
{
  kdAssert(p == NULL, fileName, lineNum);
}

void kdAssertNotNull(const void *p, const char *fileName, const int lineNum)
{
  kdAssert(p != NULL, fileName, lineNum);
}

void kdAssertStringEquals(const char *expected, const char *actual, const char *fileName, const int lineNum)
{
  kdAssert(strcmp(expected,actual)==0, fileName, lineNum);
}

void kdAssertDoubleEquals(const double expected, const double actual, const double delta, const char *fileName, const int lineNum)
{
  kdAssert(fabs(expected - actual) <= delta, fileName, lineNum);
}

void kdAssertFloatEquals(const float expected, const float actual, const float delta, const char *fileName, const int lineNum)
{
  kdAssert(fabs(expected - actual) <= delta, fileName, lineNum);
}

void kdAssertLongEquals(const long expected, const long actual, const char *fileName, const int lineNum)
{
  kdAssert(expected==actual, fileName, lineNum);
}

void kdAssertIntEquals(const int expected, const int actual, const char *fileName, const int lineNum)
{
  kdAssert(expected==actual, fileName, lineNum);
}

void kdAssertShortEquals(const short expected, const short actual, const char *fileName, const int lineNum)
{
  kdAssert(expected==actual, fileName, lineNum);
}

void kdAssertCharEquals(const char expected, const char actual, const char *fileName, const int lineNum)
{
  kdAssert(expected==actual, fileName, lineNum);
}
