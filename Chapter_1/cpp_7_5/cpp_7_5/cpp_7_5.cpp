#include<iostream>

using namespace std;

int main()
{
	//null 포인터
	int* p = new int;
	delete p;
	p = nullptr;//동적할당을 했을때 중간에 삭제했는지 안했는지 중간에 모르기 때문에 null포인터를 넣어주는게 좋다
	std::nullptr_t a;//null포인터는 비어있는 null이 아니라 하나의 상수이다.

	bool b;

	nullptr_t n;
	int* p_2=n;//원래 포인터를 포인터변수에 저장을 못하지만 null포인터는 예외
}