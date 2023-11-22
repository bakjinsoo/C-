#include<iostream>

using namespace std;
int main()
{
	//while문
	//피보나치 수열
	int num;
	cin >> num;
	if (0 == num)
		cout << 0 << endl;
	else {
		int prevValue = 0;
		int currValue = 1;
		while (--num)
		{
			int nextValue = prevValue + currValue;
			prevValue = currValue;
			currValue = nextValue;
		}
		cout << currValue << endl;
	}
}