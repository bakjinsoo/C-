#include<cstdio>
#include<iostream>
#include<iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	cout << 1 << endl;
	cout << '1' << endl;

	cout.put('a');
	cout.put('\n');
	cout.write("hello world", 5);//5개만 슬라이싱 해서 출력
	cout.width(10);//폭을 지정해줌
	cout.fill('#');//폭의 빈부분을 이 글자로 채움
	cout << 1;

	float num = 0.1234567f;
	cout.precision(10);//소수점 10자리까지 정밀도 표현
	cout.setf(ios_base::showpos);//부호 표현
	cout << 1 << endl;

	//정렬은 총 3가지가 있음 ios_base :: left, right, interanal 
	//hex 8진수 dec 10진수 oct 16진수
	cout << hex<<16<<endl;


}