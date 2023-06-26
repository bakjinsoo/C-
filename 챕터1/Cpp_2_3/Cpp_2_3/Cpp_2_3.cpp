#include<iostream>
#include<cfloat>
using namespace std;
int main()
{
	//부동소수점 
	float num0 = 1.5;
	float num1 = num0 * 1.5;
	float num2 = num0 / 2;
	float num3 = num0 - 3;

	cout << "num0 " << num0 << endl;
	cout << "num1 " << num1 << endl;
	cout << "num2 " << num2 << endl;
	cout << "num3 " << num3 << endl;
	//부동소수점 : 소수가 움직인다. 
	// float 32bit double 64bit long double 64~128bit long double자료형만 컴파일러, 버전,플랫폼마다 다름
	// 부호 가수부 지수부
	// 지수부 2진수 계산하는법 127을 0으로 가정
	//
	unsigned int num0_;
	float num1_ = -118.625;
	memcpy(&num0_, &num1_, sizeof(num1_));
	cout << num0_ << endl;
	cout << num1_ << endl;
	//부도소수점 주의해야할점
	//if문으로 == 비교연산을 못함 이유 : 컴퓨터는 소수점에 근사한 값을 나타냄
	// 같은값을 나타내지 못하므로 ==비교연산 불가능
	// 아래 출력문이 예시임.
	float num5 = 0.1f;
	float num6 = 0.02f*5.0f;
	cout.precision(64);
	cout << num5 << endl;
	cout << num6 << endl;

	float num7 = 1.0f;
	float num8 = 1.0f;
	for (int i = 0; i < 1000; i++)
		num7 = num7 + 0.001f;
	if (fabsf(num7 - num8) <= FLT_EPSILON)//fabsf 절대값 부동소수점은 오차율이 크기때문에 ==(같다)비교연산을 하지 않는게 좋음
		cout << "Equal1" << endl;
	//float자료형의 또다른 위험한점
	// 정밀도를 요구하는 연산을 할때는 부동소수점을 사용하면 안됨 
	// 예를 들어서 엄청큰 크기의 자료형과 1을 더했을때 1이 안더해지는 상황이 발생함.
	// 작은수의 연산을 무시할수 있는 가능성 존재
	// 정밀한 계산을 원한다면 고정소수점, int 자료형, 정밀한연산을 위한 라이브러리를 사용해야함
	
	float fltMin = FLT_MIN;
	float flotTrueMin = FLT_TRUE_MIN;
	//fltmin은 지수부에 1을 더함 
	//flttruemin 가수부에 1을 더함 예외상황 : 원래라면 10^-127이어야하지만, 10^-126으로 간주함.
}