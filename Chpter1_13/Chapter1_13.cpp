#include <iostream>

namespace MySpace1
{
  int doSomething(int a, int b)
  {
    return a + b;
  }
}

namespace Myspace2
{
int doSomething(int a, int b)
{
  return a + b;
}
}

using namespace std;

int main()
{
  using namespace MySpace1;
  doSomething(3,4);
  //cout <<MySpace1::doSomething(3,4) <<endl;
  //cout <<Myspace2::doSomething(3,4) <<endl;
  return 0;
}