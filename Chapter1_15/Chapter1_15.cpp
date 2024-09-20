#include <iostream>

int main()
{
  using namespace std;

  bool bValue = true;
  char chValue = 65;
  float fValue = 3.141592;
  double dValue = 3.141592;

auto aValue = 3.141592;
//자동으로 데이터 타입을 결정해준다.

//이 두가지는 객체 지향에 넘어가면 직접 만든 데이터 타입을 초기화 할때 많이 쓴다. -초기화 방법
int i = (int)3.1415;  // copy initialization
int a(123);           // direct initialization
int b{ 123 };         // uniform initialization

int k,f; //여러개 선언할 수 있다.




  return 0;
}