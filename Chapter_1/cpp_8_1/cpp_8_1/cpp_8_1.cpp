#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//참조
	vector<int> vec0;
	vector<int>& vec1=vec0;//참조
	vector<int>* vec2=&vec0;//포인터

	vec0.push_back(1);
	vec1.push_back(2);
	vec2->push_back(3);
	for (int num : vec0)
		cout << num << endl;

	//포인터는 중간에 다른 변수를 지정가능하지만 참조는 불가능

}