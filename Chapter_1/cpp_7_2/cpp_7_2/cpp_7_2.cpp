#include<iostream>

using namespace std;
int main()
{
	int nums[3] = { 1,2,3 };
	int* pNums = nums;
	//nums�� &nums[0]�� ����������
	//&nums�� �ٸ��� ����
	cout << nums << endl;
	cout << &nums[0] << endl;

	cout << pNums[0] << endl;
	cout << pNums[1] << endl;
	cout << pNums[2] << endl;

	cout << *nums << endl;
	cout << *(nums + 1) << endl;
	cout << *(nums + 2) << endl;
}