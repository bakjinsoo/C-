#include<iostream>

using namespace std;
struct Person
{
	float weight;
	float height;
};
int main()
{
	for (int i = 0; i < 3; i++)
	{
		int num = 0;
		++num;
		cout << num << endl;
	}
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		static int num = 0;// ���� �޸� �Ҵ�, �Ҵ��� ���α׷��� �����Ҷ��� ���� ����� ���α׷��� ����ɶ� �ؼ� ���� ��������	
		++num;
		cout << num << endl;
	}

	int* pNum = new int(123);
	int* pNum1 = pNum;
	cout << *pNum << endl;	

	int s;
	cin >> s;
	int* arr = new int(s);//�����迭 ���� �����ͷ� �������
	arr[0] = 1;
	cout << arr[0] << endl;
	Person* persons = new Person{ 74.1f,160.1f };
	//
	cout << (*persons).weight << endl;
	cout << persons->weight << endl;
	//�ΰ��� ������ ���� ��


}