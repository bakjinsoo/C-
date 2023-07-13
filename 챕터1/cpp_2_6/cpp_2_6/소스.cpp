#include<iostream>

using namespace std;
int main()
{
	bool b0 = 0 == 0;
	bool b1 = 0 < 1;
	bool b2 = 0 > 1;
	// bool형은 1은 true 0은 false
	// bool형을 true false 로 하려면
	//cout.setf(ios_base::boolalpha);//이 문을 넣어줘야 함
	cout << "b0 : " << b0 << endl;
	cout << "b1 : " << b1 << endl;
	cout << "b2 : " << b2 << endl;

	int itrue = true;
	int ifalse = false;

	cout << itrue << endl;
	cout << ifalse << endl;

	bool btrue = 100;
	bool bfalse = 0;
	//bool형 변수는 0이면 false 그외는 모두 true로 반환함
	cout << btrue << endl;
	cout << bfalse << endl;
}