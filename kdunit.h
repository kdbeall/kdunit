#ifndef KDUNIT_H
#define KDUNIT_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include "kdunit.c"

void kdAssert(bool val);

void kdAssertNull(const void *p);

void kdAssertNotNull(const void *p);

void kdAssertStringEquals(const char *expected, const char *actual);

void kdAssertDoubleEquals(const double expected, const double actual, const double delta);

void kdAssertFloatEquals(const float expected, const float actual, const float delta);

void kdAssertLongEquals(const long expected, const long actual);

void kdAssertIntEquals(const int expected, const int actual);

void kdAssertShortEquals(const short expected, const short actual);

void kdAssertCharEquals(const char expected, const char actual);

#endif
