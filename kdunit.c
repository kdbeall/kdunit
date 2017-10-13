#include "kdunit.h"

void kdAssert(bool val)
{
  if(!val){
    fprintf(stderr, "%s: %i\n", __FILE__,__LINE__);
    exit(0);
  }
}

void kdAssertNull(const void *p)
{
  kdAssert((p == NULL));
}

void kdAssertNotNull(const void *p)
{
  kdAssert(p != NULL);
}

void kdAssertStringEquals(const char *expected, const char *actual)
{
  kdAssert(strcmp(expected,actual)==0);
}

void kdAssertDoubleEquals(const double expected, const double actual, const double delta)
{
  kdAssert(fabs(expected - actual) <= delta);
}

void kdAssertFloatEquals(const float expected, const float actual, const float delta)
{
  kdAssert(fabs(expected - actual) <= delta);
}

void kdAssertLongEquals(const long expected, const long actual)
{
  kdAssert(expected==actual);
}

void kdAssertIntEquals(const int expected, const int actual)
{
  kdAssert(expected==actual);
}

void kdAssertShortEquals(const short expected, const short actual)
{
  kdAssert(expected==actual);
}

void kdAssertCharEquals(const char expected, const char actual)
{
  kdAssert(expected==actual);
}

