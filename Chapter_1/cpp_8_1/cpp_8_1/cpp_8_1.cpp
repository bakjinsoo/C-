#include<iostream>
#include<vector>

using namespace std;

int main()
{
	//����
	vector<int> vec0;
	vector<int>& vec1=vec0;//����
	vector<int>* vec2=&vec0;//������

	vec0.push_back(1);
	vec1.push_back(2);
	vec2->push_back(3);
	for (int num : vec0)
		cout << num << endl;

	//�����ʹ� �߰��� �ٸ� ������ �������������� ������ �Ұ���

}