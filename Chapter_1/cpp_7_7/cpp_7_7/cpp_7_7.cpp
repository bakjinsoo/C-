#include<iostream>
#include<array>
#include<vector>

using namespace std;

int main()
{
	
	vector<int> vec(5,2);//�迭�� ����� �������� ������ ���� �迭�� ũ�⸦ �Է�������������
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	cout << endl;
	vec.resize(3);// �迭�� ũ�� �ٽ� ���ϱ�
	//vector�� Ư��
	//vecotr�� ������� ��� �ٲٴ°� ����
	for (int num : vec)
		cout << num << endl;
	cout << endl;
	vec.resize(9, 10);//�迭�� ũ�⸦ �ٲٰ� ������ ������ ���� ���ϴ� ����� ä��� ������
	for (int num : vec)
		cout << num << endl;
	//���ʹ� �����迭
	vector<int> vec0;

	for (int i = 0; i < 10; ++i)//���������� �����Ҵ��� �Ͼ�� �ִ�. �����Ҵ��� �Ͼ�°�쵵 ���Ͼ�� ��쵵 ����
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