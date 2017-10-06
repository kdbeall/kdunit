# kdunit
An amateur attempt at a testing toolkit for C.

    #include <stdio.h>
    #include "kdunit.h"
    
    int add(int a, int b){
      return a+b;
    }

    /** Oops... */
    int multiply(int a, int b){
      return a+b;
    }

    struct Person {
      int age;
    };

    int main(){
      kdAssertInit("Example.c tests");
      kdAssertInitGroup("Math group");
      kdAssertIntEquals(add(1, 1), 2, "Adding 1+1");
      kdAssertIntEquals(multiply(1, 1), 1, "Multiply 1*1");
      kdAssertFinishGroup();
      kdAssertInitGroup("Struct group");
      struct Person p1;
      p1.age = 50;
      kdAssertTrue(p1.age == 50, "Age is 50");
      kdAssertFinishGroup();
      kdAssertFinish();
      return 0;
    }

The above will print out something like

```

BEGIN TESTS Example.c tests

BEGIN Math group
  FAILURE Multiply 1*1

TEST GROUP RESULTS
  SUCCESSES 1
  FAILURES 1

BEGIN Struct group

TEST GROUP RESULTS
  SUCCESSES 1
  FAILURES 0

TEST RESULTS
  SUCCESSES 2
  FAILURES 1
```
