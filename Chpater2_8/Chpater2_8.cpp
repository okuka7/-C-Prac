#include <iostream>

using namespace std;

void printNumber(int my_number)
{
  cout << my_number << endl;
}

int main()
{
  

  float pi = 3.14f;

  //Decimal : 0 1 2 3 4 5 6 7 8 9 10
  //Octal   : 0 1 2 3 4 5 6 7 10 11 12 13
  //Hexa    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

  const double gravity {9.8}; //상수는 무조건 선언과 동시에 초기화해줘야 한다.

  //gravity = 1.2; 상수라서 변경이 안된다. 
  
  return 0;
}