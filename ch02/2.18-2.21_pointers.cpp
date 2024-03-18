#include <iostream>
using namespace std;

int main()
{
  //2.18
  int i = 42;
  int *pi = &i;

  //changing the value of a pointer
  int j = 6;
  pi = &j;
  cout << *pi << " " <<  j << " " << i << endl;

  //changing the value of object pinter points to
  pi = &i;
  *pi = 11;
  cout << *pi  << " " << i << endl;

  //2.20
  int k = 42;
  int *p1 = &k;
  //sets the value stored in p1 (k) to the value stored in p1 times itself (k x k = 42 x 42 =1764)
  *p1 = *p1 * *p1;
  cout << *p1 << endl;

  //2.21
  int l = 0;
  double *dp = &l;  //illegal, can't assign integer address to pointer to double type
  int *ip = l;  //illegal, can't assign integer value to pointer to integer type
  int *p = &l;  //legal, can assign address of l to pointer to integer
}
