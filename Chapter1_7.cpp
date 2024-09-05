#include <iostream>

using namespace std;

int main()
{
  int x = 0;

  cout << x << " " << &x << endl;

  {
    int x = 1;
    //괄호안에 괄호를 넣어도 된다. 이친구의 역할은 영역을 분리해주는 것이다.
    cout << x << " " << &x << endl;
  }
  {
    int x = 2;
    cout << x << " " << &x << endl;
    //이름은 똑같이 x인데 주소가 다르다.
    //스코프를 벗아나게 되면 사용할 수 없게 된다.
    //세개의 x주소 모두가 다르다.

  }

  return 0;
}