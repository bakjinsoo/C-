#include<iostream>

using namespace std;
int main()
{
	//do while��
	/*int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}*/
	// do while�� ������ ���� �ʰ� ������ �ѹ��� ������ ��
	/*do {
		...
	}
	whlie();*/


	//����ó��

	//���丮�� �Լ�
	int num;
	cin >> num;
	int total = 1;
	do {
		total *= num;
		--num;
	} while (num);
	cout << total << endl;

	//���丮�� �Լ�
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