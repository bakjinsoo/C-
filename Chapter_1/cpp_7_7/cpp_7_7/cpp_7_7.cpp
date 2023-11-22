#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main()
{
	
	vector<int> vec(5,2);//배열의 사이즈를 동적으로 받을수 있음 배열의 크기를 입력으로지정가능
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << endl;
	vec.resize(3);// 배열의 크기 다시 정하기
	//vector의 특성
	//vecotr의 사이즈는 계속 바꾸는게 가능
	for (int num : vec)
		cout << num << endl;
	cout << endl;
	vec.resize(9, 10);//배열의 크기를 바꾸고 나머지 값들을 내가 원하는 값들로 채우고 싶을때
	for (int num : vec)
		cout << num << endl;
	//벡터는 동적배열
	vector<int> vec0;

	for (int i = 0; i < 10; ++i)//내부적으로 동적할당이 일어나고 있다. 동적할당이 일어나는경우도 안일어나는 경우도 있음
	{
		vec0.push_back(i);
		cout << vec0.size() << endl;
		cout << vec0.data() << endl;
	}

	vector<int> vec1{ 1,2,3 };
	vector<int> vec2{ 1,2,3 };
	vec1 = vec2;
	for (int num : vec1)
		cout << num << endl;
}