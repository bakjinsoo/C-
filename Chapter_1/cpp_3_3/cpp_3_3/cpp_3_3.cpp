#include<cstdio>
#include<iostream>
#include<iomanip>
#pragma warning(disable:4996)

using namespace std;

int main()
{
	cout << 1 << endl;
	cout << '1' << endl;

	cout.put('a');
	cout.put('\n');
	cout.write("hello world", 5);//5���� �����̽� �ؼ� ���
	cout.width(10);//���� ��������
	cout.fill('#');//���� ��κ��� �� ���ڷ� ä��
	cout << 1;

	float num = 0.1234567f;
	cout.precision(10);//�Ҽ��� 10�ڸ����� ���е� ǥ��
	cout.setf(ios_base::showpos);//��ȣ ǥ��
	cout << 1 << endl;

	//������ �� 3������ ���� ios_base :: left, right, interanal 
	//hex 8���� dec 10���� oct 16����
	cout << hex<<16<<endl;


}