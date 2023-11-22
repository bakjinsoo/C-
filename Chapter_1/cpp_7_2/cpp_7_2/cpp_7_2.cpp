#include<iostream>

using namespace std;
int main()
{
	int nums[3] = { 1,2,3 };
	int* pNums = nums;
	//nums와 &nums[0]은 완전히같다
	//&nums는 다르니 주의
	cout << nums << endl;
	cout << &nums[0] << endl;

	cout << pNums[0] << endl;
	cout << pNums[1] << endl;
	cout << pNums[2] << endl;

	cout << *nums << endl;
	cout << *(nums + 1) << endl;
	cout << *(nums + 2) << endl;
}