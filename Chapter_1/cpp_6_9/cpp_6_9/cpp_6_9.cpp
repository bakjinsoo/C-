#include<iostream>
#include<array>
using namespace std;

struct Person
{
	float weight;
	float height;
};

int main()
{
	//Range based for
	//������� for
	int arr[5] = { 1,2,3,4,5 };
	for (int num : arr)// num ������ �迭 ���ҵ� �� ��ü.
	{
		cout << num << endl;
	}
	cout << endl;
	array<int, 5>arr0 = { 1,2,3,4,5 };
	for (int num : arr0)
	{
		cout << num << endl;
	}

	Person persons[] = {
		Person{70.f,181.f},
		Person{56.2f,167.3f}
	};
	
	for (Person& person : persons)//���� ���۷����� ���ؼ� ranged for�� �����͸� ��� �� ��ȯ ����
	{
		person.weight = 0.0f;
	}
	for (Person person : persons)
	{
		cout << person.weight << " " << person.height << endl;
	}
	//������� ������ �� �迭�� ������ �Ϸ��� ������ �����


}