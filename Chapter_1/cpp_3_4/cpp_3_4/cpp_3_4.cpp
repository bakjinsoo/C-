#include<iostream>

using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << a << endl;
	//����� ���̺귯�� iostream
	//
	char ch;
	cin >> ch;
	cout << ch << endl;
	cin.ignore();// ������ �Է������� ũ�⸸ŭ ����
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cin >> ch;
	cout << ch << endl;

	//cin.fail �Է� ������ �������� �ƴ��� üũ�ϴ� �Լ�
	//cin.clear �Է¹����� �����ִ� �Լ�

}