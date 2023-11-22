#include<iostream>

using namespace std;
int main()
{
	//do while문
	/*int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}*/
	// do while은 조건을 보지 않고 무조건 한번은 실행이 됌
	/*do {
		...
	}
	whlie();*/


	//예외처리

	//팩토리얼 함수
	int num;
	cin >> num;
	int total = 1;
	do {
		total *= num;
		--num;
	} while (num);
	cout << total << endl;

	//팩토리얼 함수
	//0,1,1,2,3,5,8,13,21
	int num2;
	cin >> num2;
	if (num2 <= 1)
	{
		cout << num2 << endl;
	}
	else {
		int prevValue = 0;
		int currValue = 1;
		do {
			int nextValue = prevValue + currValue;
			prevValue = currValue;
			currValue = nextValue;
		} while (--num2 - 1);
		cout << currValue << endl;
	}
	
}