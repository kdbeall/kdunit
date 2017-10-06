#ifndef KDUNIT_H
#define KDUNIT_H

void assertNull(const void *p);

void assertNotNull(const void *p);

void assertStringEquals(const char *expected, const char *actual);

void assertDoubleEquals(const double expected, const double actual, const double delta);

void assertFloatEquals(const float expected, const float actual, const float delta);

void assertLongEquals(const long expected, const long actual);

void assertIntEquals(const int expected, const int actual);

void assertShortEquals(const short expected, const short actual);

void assertCharEquals(const char expected, const char actual);

#endif
