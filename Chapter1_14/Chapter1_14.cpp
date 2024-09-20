#include <iostream>
using namespace std;

#define MY_NUMBER 9 //"Hello, World도 가능하다."
//매크로는 많이 안쓴다. 하드코딩과 같은 퍼포먼스를 낸다. 

int main()
{

  cout << MY_NUMBER << endl;
  return 0;
}

//전처리기는 빌드 시작전에 윈도운지 맥인지 알고 시작하자 라고 할때 많이 쓴다.
//멀티 플랫폼개발할 때 많이 쓴다.
//그 외는 많이 쓰지 않는다.