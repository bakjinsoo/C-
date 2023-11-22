#include<iostream>

using namespace std;
int main()
{
	//for문
	//break continue 주의
	//팩토리얼

	int num;
	cin >> num;

	int total = 1;
	for (; num; num--)
	{
		total *= num;
	}
	cout << total << endl;

}