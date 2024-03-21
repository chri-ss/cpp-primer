#
#include <iostream>

using namespace std;

int main()
{
  //2.30
  int i = 42;
  const int v2 = 0; 
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2 , *const p3 = &i, &r2 = v2;

  //v2 has low level const, v1 is not const, p1 and r1 are also not const.
  //p2 has low level const, p3 has low and high-level const, r2 has low-level const
  
  //2.31
  r1 = v2;  //legal, causes r1 to be low lvel const
  //p1 = p2;  //illegal, p2 is a pointer to a const int, p1 points to a default int
   
  //p1 = p3;  // illegal, p3 has top level int, but p1 does not so types do not match
  p2 = p1;  //legal, p1 points to the address of v1, a constant in memory. We can't change the value of i through p2 (e.g. with '*p2 = some other value) because p2 is low level const.
  p2 = p3;  //legal, both have low level const so types match 
}
