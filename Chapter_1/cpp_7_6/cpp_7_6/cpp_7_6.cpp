#include<iostream>

using namespace std;

int main()
{
	//void pointer ���� ����
	//
	int num = 10;
	int* p = &num;

	void* vp = p;//�����ͺ����� �����͸� ���� ����, void ������ ����, ������� �����ʹ� �ٸ� �����͸� �޴°� ����
	//void �����ʹ� �ּҰ��� ������ ��� �ٷ���ϴ��� ��
	int* p0 = (int*)vp;//�׷��� �̷� ������� �����������
	cout << *p0 << endl;
	
	int nums[] = { 1,2,3 };
	void* vp0 = nums;//void�����ʹ� ������� �ȵ� 
	
	//void �����͸� ����ؾ��Ҷ���? -> � Ÿ���� �������� �𸦶� void �����͸� ��� �ַ� �Լ�����ҋ�
	int* p1 = (int*)malloc(sizeof(int) * 3);//�Լ����� �Ÿ���� �������� �𸦶� void �����͸� ���
	free(p1);//� �����Ͱ� ������ �𸣴ϱ� �Լ� ���ڷ� void pointer�� ����
}