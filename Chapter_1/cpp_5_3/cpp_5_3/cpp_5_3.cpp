#include<iostream>

using namespace std;
int main()
{
	char ch;
	cin >> ch;
	switch (ch)//switch case�� integer��(������)�� ���� 'a'���� ���� ascii�ڵ�� �����Ƿ� ����, "a"�� �Ұ��� �������̶�
	{
	case 'A':
		cout << "convert a" << endl;
		[[fallthrough]];//��Ʈ����Ʈ�� �ϴ°��� �˷��ִ� ��
	case 'a':
		cout << "kimchi" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Korean BBQ" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Chicken" << endl;
		break;
	default:
		cout << "invalid Input" << endl;
		break;
	}
	//switch ������ ����(������)
}