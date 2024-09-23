#include <iostream>

using namespace std;

int add(int a, int b); //forward declaration 먼저 선언을 해준다.
int multiply(int a, int b);
int subtract(int a, int b);


int main()
{
  cout << add(1,2) << endl;
  cout << multiply(1,2) <<endl;
  cout << subtract(2,3) << endl;
  return 0;
}

int multiply(int a, int b)
{
  return a + b;
}

int subtract(int a, int b)
{
  return a - b;

}