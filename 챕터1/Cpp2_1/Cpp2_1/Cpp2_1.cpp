#include<iostream>

using namespace std;
int main()
{
	int x(1), y(2), z = 3;

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	int num0 = 11;
	int num1 = 011;
	int num2 = 0b11;
	int num3 = 0x11;
	cout << "num0 " << num0 << endl;
	cout << "num1 " << num1<< endl;
	cout << "num2 " << num2 << endl;
	cout << "num3 " << num3 << endl;
	//signed int ��ȣ�� ����  ������ ����� ���� ǥ�� ��� ����
	//unsigned int ��ȣ�� ���� ����� ǥ������

	int intNum = 0;
	long longNum = 0;
	int* intPointer = &intNum;
	cout << sizeof(intNum) << endl;
	cout << sizeof(longNum) << endl;
	cout << sizeof(intPointer) << endl;

	int8_t num7 = 0;
	int16_t num8 = 0;
	int32_t num9=0;
	//����� �ΰ��� ��ȣȭ ���� �۾��� �Ҷ��� �ڷ����� ũ�⸦ �����������.
	cout << (int)numeric_limits<uint8_t>::max() << endl;
	cout << numeric_limits<uint16_t>::max() << endl;
	cout << numeric_limits<uint32_t>::max() << endl;
	cout << (int)numeric_limits<int64_t>::max() << endl;//signed int�� �ڷ� �ִ�ũ��
	//unsigned int �ڷ��� �ִ�ũ�� ����ϴ¹�
	//���� �������� ���� ���������� �ٲٷ��� ����ó���ؾ���

}