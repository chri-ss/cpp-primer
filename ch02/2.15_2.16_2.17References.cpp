#include <iostream>
using namespace std;
int main()
{
  //2.15
  int ival = 1.01; //ok but truncates
  //int &rval1 = 1.01; //no good, can't initialize reference to literal
  int &rval2 = ival; //ok
  //int &rval3; // no good, must be initialized
  
  //2.16
  int i = 0, &r1 = i; double d = 0, &r2 = d;
  r2 = 3.141519; //ok, changes the value of d to 3.141519
  r2 = r1;  //no good, type invalid
  i = r2;  //ok
  r1 = d; //no good, type invalid

  //2.17
  int j, &rj = j;
  j = 5, rj = 10;
  std::cout << j << " " << rj << endl;
}
