#include<iostream>
using namespace std;

int main()
{
	cout << 40 - 32 / 2 << "==" << 24 << endl;// ��ǻ�ʹ� ������ �켱���������� ����ϰ� ��
	
	cout << 4 - 6 + 2 + 8 / 2 / 2 * 2;

	int a, b, c;
	a = b = c = 10;//�Ҵ�
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//int a = 10;//�ʱ�ȭ c��
	//int a(10);//c++�� �ʱ�ȭ
	//�ʱ�ȭ�� �Ҵ� ������ ���� �����ϱ�

	cout << -+-+-+1<<endl;//���׿����� ���� �켱�����������ʿ��� �������� ���°� ����
	int num = 0;
	//num++;//����������
	//--num;//����������
	cout << num++ << endl;//������� �� �����׿� �־���(���� ������)
	cout << num << endl;

	//�����ؾ��� ��
	int num1 = 10;
	cout << ++num + num++ << endl;
	cout << num << endl;
	printf("%d %dn", ++num, ++num);
	printf("%d\n", num);
	//���� �����Ҷ� �ϳ��� ������ �ѽĿ����ι� �����Ҷ��� �����ؾ��� (undefined behavior) �� �����Ϸ����� �Ȱ��� �ൿ�� �Ѵٴ� ������ ����
	//���࿡�� �ϳ��� ������ ������ �ι��̻� �ϸ� �ȉ�.
}