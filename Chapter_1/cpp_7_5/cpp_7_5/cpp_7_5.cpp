#include<iostream>

using namespace std;

int main()
{
	//null ������
	int* p = new int;
	delete p;
	p = nullptr;//�����Ҵ��� ������ �߰��� �����ߴ��� ���ߴ��� �߰��� �𸣱� ������ null�����͸� �־��ִ°� ����
	std::nullptr_t a;//null�����ʹ� ����ִ� null�� �ƴ϶� �ϳ��� ����̴�.

	bool b;

	nullptr_t n;
	int* p_2=n;//���� �����͸� �����ͺ����� ������ �������� null�����ʹ� ����
}