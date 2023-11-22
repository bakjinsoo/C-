#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	//구조체
	struct EyeSight {
		float left;
		float right;
	};
	struct Person//새로운 자료형을 만든거임 -> 구조체
	{
		float height;
		float weight;
		char name[10];
		short grade;
		EyeSight eyeSight;//구조체 안에 구조체 삽입 가능 단 삽입할 구조체는 먼저 선언해줘야 가능
	};
	struct Person_two
	{
		float height;//4
		float weight;//4
		char name[10];//10
		short grade;//2
	};//메모리 사이즈는 그대로 잡히지 않음, 위의 예시대로면 메모리 크기의 합이 4의 배수여야함

	Person person;//선언

	person.height = 174.2;//접근
	person.weight = 67.8;
	strcpy_s(person.name, 10, "David");
	person.grade = 1;
	cout << person.height << endl;
	cout << person.weight << endl;
	cout << person.grade << endl;
	cout << person.name << endl;

	//번거로우니까 초기화 리스트 주기 가능
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
	//14분 강의 6-5
	
}