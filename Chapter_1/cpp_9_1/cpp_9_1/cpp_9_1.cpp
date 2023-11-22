#include<iostream>

using namespace std;

int sum(int, int);
int cabs(int);
int cabssum(int, int);
//메인 함수를 맨위에 올리고 부함수들을 아래로 내리고 싶을때 맨위에 이렇게만 올려주는것도 가능
int sum(int x, int y)
{
	return x + y;
}
void print(int x, int y)//return울 함수가 중간에 중단되게 할수 있게하는 역할도 있음
{
	cout << x << endl;
	if (y < 0)
		return;
	cout << y << endl;	
}
int cabs(int x)
{
	if (x > 0)
		return x;
	else
		return -x;
}
int cabssum(int x, int y)//쓰려고하는 함수는 무조건 위에 있어야 쓸수있음
{
	int ax = cabs(x);
	int ay = cabs(y);
	return ax + ay;
}
int main()//int 형 변수를 반환한다. main함수는 암시적으로 return 0;이 생략되어있음
{
	//함수
	cout << sum(5, 10) << endl;
	cout << "프린트 함수" << endl;
	print(10, -20);
	cout << "abs함수" << endl;
	cout << cabssum(10, -30) << endl;
}