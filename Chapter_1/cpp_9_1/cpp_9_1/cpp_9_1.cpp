#include<iostream>

using namespace std;

int sum(int, int);
int cabs(int);
int cabssum(int, int);
//���� �Լ��� ������ �ø��� ���Լ����� �Ʒ��� ������ ������ ������ �̷��Ը� �÷��ִ°͵� ����
int sum(int x, int y)
{
	return x + y;
}
void print(int x, int y)//return�� �Լ��� �߰��� �ߴܵǰ� �Ҽ� �ְ��ϴ� ���ҵ� ����
{
	cout << x << endl;
	if (y < 0)
		return;
	cout << y << endl;	
}
int cabs(int x)
{
	if (x > 0)
		return x;
	else
		return -x;
}
int cabssum(int x, int y)//�������ϴ� �Լ��� ������ ���� �־�� ��������
{
	int ax = cabs(x);
	int ay = cabs(y);
	return ax + ay;
}
int main()//int �� ������ ��ȯ�Ѵ�. main�Լ��� �Ͻ������� return 0;�� �����Ǿ�����
{
	//�Լ�
	cout << sum(5, 10) << endl;
	cout << "����Ʈ �Լ�" << endl;
	print(10, -20);
	cout << "abs�Լ�" << endl;
	cout << cabssum(10, -30) << endl;
}