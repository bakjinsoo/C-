#include<iostream>

using namespace std;

int main()
{
	//void pointer 형이 없다
	//
	int num = 10;
	int* p = &num;

	void* vp = p;//포인터변수는 포인터를 저장 못함, void 포인터 가능, 어떤형태의 포인터는 다른 포인터를 받는게 가능
	//void 포인터는 주소값은 있지만 어떻게 다뤄야하는지 모름
	int* p0 = (int*)vp;//그래서 이런 방식으로 저장해줘야함
	cout << *p0 << endl;
	
	int nums[] = { 1,2,3 };
	void* vp0 = nums;//void포인터는 출력조차 안됨 
	
	//void 포인터를 사용해야할때는? -> 어떤 타입의 변수인지 모를때 void 포인터를 사용 주로 함수사용할떄
	int* p1 = (int*)malloc(sizeof(int) * 3);//함수에서 어떤타입의 변수인지 모를때 void 포인터를 사용
	free(p1);//어떤 포인터가 들어올지 모르니까 함수 인자로 void pointer로 받음
}