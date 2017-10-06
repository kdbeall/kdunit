#include<assert.h>
#include<string.h>
#include<math.h>
#include "kdunit.h"


void assertNull(const void *p)
{
  assert(p == NULL);
}

void assertNotNull(const void *p)
{
  assert(p != NULL);
}

void assertStringEquals(const char *expected, const char *actual)
{
  assert(strcmp(expected,actual)==0);
}

void assertDoubleEquals(const double expected, const double actual, const double delta)
{
  assert(fabs(expected - actual) <= delta);
}

void assertFloatEquals(const float expected, const float actual, const float delta)
{
  assert(fabs(expected - actual) <= delta);
}

void assertLongEquals(const long expected, const long actual)
{
  assert(expected==actual);
}

void assertIntEquals(const int expected, const int actual)
{
  assert(expected==actual);
}

void assertShortEquals(const short expected, const short actual)
{
  assert(expected==actual);
}

void assertCharEquals(const char expected, const char actual)
{
  assert(expected==actual);
}
