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
	//범위기반 for
	int arr[5] = { 1,2,3,4,5 };
	for (int num : arr)// num 변수가 배열 원소들 그 자체.
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
	
	for (Person& person : persons)//값과 레퍼런스에 의해서 ranged for은 포인터를 써야 값 변환 가능
	{
		person.weight = 0.0f;
	}
	for (Person person : persons)
	{
		cout << person.weight << " " << person.height << endl;
	}
	//범위기반 루프는 원 배열에 접근을 하려면 포인터 써야함


}