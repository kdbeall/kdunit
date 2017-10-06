#ifndef KDUNIT_H
#define KDUNIT_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

void kdAssertInitGroup(const char* group_name);

void kdAssertFinishGroup();

void kdAssertInit(const char *message);

void kdAssertFinish();

void kdAssert(const bool val, const char *message);

void kdAssertTrue(const bool val, const char *message);

void kdAssertFalse(const bool val, const char *message);

void kdAssertNull(const void *p, const char *message);

void kdAssertNotNull(const void *p, const char *message);

void kdAssertStringEquals(const char *expected, const char *actual, const char *message);

void kdAssertDoubleEquals(const double expected, const double actual, const double delta, const char *message);

void kdAssertFloatEquals(const float expected, const float actual, const float delta, const char *message);

void kdAssertLongEquals(const long expected, const long actual, const char *message);

void kdAssertIntEquals(const int expected, const int actual, const char *message);

void kdAssertShortEquals(const short expected, const short actual, const char *message);

void kdAssertCharEquals(const char expected, const char actual, const char *message);

#endif
