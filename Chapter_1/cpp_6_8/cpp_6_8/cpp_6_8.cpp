#include<iostream>
#include<array>

using namespace std;

int main()
{
	//std array ���� ������
	array<int, 5> arr = { 1,2,3,4,5 };// <�迭�ڷ���, �迭 ������> �迭�̸�
	//���� ���� �ʼ�
	// ���ϸ� ������ ����
	//������ ����°ſ� ���ؼ� üũ�� ����
	cout << "0��° �迭 : "<< arr.at(0) << endl;
	cout << "�迭 ������ : " << arr.size() << endl;
	cout << "front �迭 : " << arr.front() << endl;
	cout << "back �迭 : " << arr.back() << endl;

	array<int, 5>arr0 = { 1,2,3,4,5 };
	array<int, 5>arr1 = { 5,4,3,2,1 };

	arr0.swap(arr1);

	for (int i = 0; i < arr0.size(); i++)
		cout << arr0[i];
	cout << endl;
	for (int i = 0; i < arr0.size(); i++)
		cout << arr1[i];
	cout << endl;
	//
	cout << arr0.data()[0] << endl;
}