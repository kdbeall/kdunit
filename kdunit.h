#ifndef KDUNIT_H
#define KDUNIT_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include "kdunit.c"

#define REPORT __FILE__,__LINE__

void kdAssert(bool val, const char *fileName, const int lineNum);

void kdAssertNull(const void *p, const char *fileName, const int lineNum);

void kdAssertNotNull(const void *p, const char *fileName, const int lineNum);

void kdAssertStringEquals(const char *expected, const char *actual, const char *fileName, const int lineNum);

void kdAssertDoubleEquals(const double expected, const double actual, const double delta, const char *fileName, const int lineNum);

void kdAssertFloatEquals(const float expected, const float actual, const float delta, const char *fileName, const int lineNum);

void kdAssertLongEquals(const long expected, const long actual, const char *fileName, const int lineNum);

void kdAssertIntEquals(const int expected, const int actual, const char *fileName, const int lineNum);

void kdAssertShortEquals(const short expected, const short actual, const char *fileName, const int lineNum);

void kdAssertCharEquals(const char expected, const char actual, const char *fileName, const int lineNum);

#endif
