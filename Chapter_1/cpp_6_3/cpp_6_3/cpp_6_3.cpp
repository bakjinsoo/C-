#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	//���ڿ�
	//���ڿ� �迭�� null���ڰ� �׻� �������� �پ����
	char str[] = "abc";
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << "sizeof : " << sizeof(str) << endl;

	str[1] = 0;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << "strlen : " << strlen(str) << endl;

	cout << str << endl;

	//���ڿ��� ���� �׻� null���ڰ� ����
	char str2[] = "hello";
	char str3[100] = "hello";
	int result = strcmp(str2, str3);//string �� �Լ� 0�̳����� true
	cout << result << endl;
	
}