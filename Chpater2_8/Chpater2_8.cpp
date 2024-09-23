#include <iostream>

using namespace std;

void printNumber(const int my_number)
{
  //값을 마음대로 바구지 못하게 하기 위해 파라미터에 const를 붙이는 경우가 많다.
  cout << my_number << endl;
}

int main()
{
  const int price_per_item = 30;
  
  int num_item = 123;

  int price = num_item * price_per_item;

  //헤더로 정의해서 사용할 수도 있다.
  return 0;
}