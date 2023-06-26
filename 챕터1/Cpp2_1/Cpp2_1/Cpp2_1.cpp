#include<iostream>

using namespace std;
int main()
{
	int x(1), y(2), z = 3;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	int num0 = 11;
	int num1 = 011;
	int num2 = 0b11;
	int num3 = 0x11;
	cout << "num0 " << num0 << endl;
	cout << "num1 " << num1<< endl;
	cout << "num2 " << num2 << endl;
	cout << "num3 " << num3 << endl;
	//signed int 부호가 있음  음수형 양수형 정수 표현 모두 가능
	//unsigned int 부호가 없음 양수만 표현가능

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;
	cout << sizeof(intNum) << endl;
	cout << sizeof(longNum) << endl;
	cout << sizeof(intPointer) << endl;

	int8_t num7 = 0;
	int16_t num8 = 0;
	int32_t num9=0;
	//사이즈에 민감한 암호화 같은 작업을 할때는 자료형의 크기를 고정해줘야함.
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << (int)numeric_limits<int64_t>::max() << endl;//signed int형 자료 최대크기
	//unsigned int 자료형 최대크기 출력하는법
	//양의 정수형을 음의 정수형으로 바꾸려면 보수처리해야함

}