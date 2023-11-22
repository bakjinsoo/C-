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
		static int num = 0;// 정적 메모리 할당, 할당을 프로그램이 시작할때만 해줌 종료는 프로그램이 종료될때 해서 값이 남아있음	
		++num;
		cout << num << endl;
	}

	int* pNum = new int(123);
	int* pNum1 = pNum;
	cout << *pNum << endl;	

	int s;
	cin >> s;
	int* arr = new int(s);//동적배열 선언 포인터로 해줘야함
	arr[0] = 1;
	cout << arr[0] << endl;
	Person* persons = new Person{ 74.1f,160.1f };
	//
	cout << (*persons).weight << endl;
	cout << persons->weight << endl;
	//두가지 구문은 같은 뜻


}