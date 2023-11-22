#include<iostream>
#include<array>

using namespace std;

int main()
{
	//std array 복합 데이터
	array<int, 5> arr = { 1,2,3,4,5 };// <배열자료형, 배열 사이즈> 배열이름
	//길이 지정 필수
	// 안하면 컴파일 오류
	//범위를 벗어나는거에 대해서 체크가 쉽다
	cout << "0번째 배열 : "<< arr.at(0) << endl;
	cout << "배열 사이즈 : " << arr.size() << endl;
	cout << "front 배열 : " << arr.front() << endl;
	cout << "back 배열 : " << arr.back() << endl;

	array<int, 5>arr0 = { 1,2,3,4,5 };
	array<int, 5>arr1 = { 5,4,3,2,1 };

	arr0.swap(arr1);

	for (int i = 0; i < arr0.size(); i++)
		cout << arr0[i];
	cout << endl;
	for (int i = 0; i < arr0.size(); i++)
		cout << arr1[i];
	cout << endl;
	//
	cout << arr0.data()[0] << endl;
}