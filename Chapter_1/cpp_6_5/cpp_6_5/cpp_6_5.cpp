#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	//����ü
	struct EyeSight {
		float left;
		float right;
	};
	struct Person//���ο� �ڷ����� ������� -> ����ü
	{
		float height;
		float weight;
		char name[10];
		short grade;
		EyeSight eyeSight;//����ü �ȿ� ����ü ���� ���� �� ������ ����ü�� ���� ��������� ����
	};
	struct Person_two
	{
		float height;//4
		float weight;//4
		char name[10];//10
		short grade;//2
	};//�޸� ������� �״�� ������ ����, ���� ���ô�θ� �޸� ũ���� ���� 4�� ���������

	Person person;//����

	person.height = 174.2;//����
	person.weight = 67.8;
	strcpy_s(person.name, 10, "David");
	person.grade = 1;
	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.grade << endl;
	cout << person.name << endl;

	//���ŷο�ϱ� �ʱ�ȭ ����Ʈ �ֱ� ����
	Person person2 = { 174.2,67.8,"David1",1,{1.1f,1.0f} };
	cout << person2.height << endl;
	cout << person2.weight << endl;
	cout << person2.grade << endl;
	cout << person2.name << endl;
	cout << person2.eyeSight.left << endl;
	cout << person2.eyeSight.right << endl;

	Person persons[5];
	persons[0].grade = 1;
	cout << persons[0].grade << endl;

	Person person = persons[1];
	person.grade = 5;
	//14�� ���� 6-5
	
}