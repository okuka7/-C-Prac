#include <iostream>
#include <limits>

int main()
{
  using namespace std;

  char c1(65);
  char c2('A'); //한 글자를 사용할때는 따옴표 문자열은 ""를 사용한다. //std::string

  cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) <<endl;
  cout << std::numeric_limits<char>::max() << endl;

  cout << (char)65<<endl; //c스타일 캐스팅
  cout << char(65) << endl; //c++ 캐스팅
  cout << static_cast<char>('A') <<endl; //기본타입간에 변환할때 컴파일러에게 부탁해서 변환하는 성격이 강한 방법이다.


  return 0;
}