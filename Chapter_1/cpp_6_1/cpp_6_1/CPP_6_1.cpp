#include<iostream>
using namespace std;
int main()
{
	//�迭
	//const int ����� �߰��� ���� �ٲܼ� ����
	//�迭�� �ݺ����� �������� ŭ 
	
	int nums0[3] = { 0,1,2 };
	int nums1[3];

	//memcpy(&nums1,&nums0,sizeof(nums0));
	//������ �迭, ������ �迭�� ũ��, ������� �迭
	//�ּҰ��� ������ 1�� ���ص� �޸𸮿��� 4�� ���Ѱɷ� ����
	copy(nums0, nums0 + 3, nums1);//�����ͷ� �ϸ� �ȉ�

	for (int i = 0; i < 3; i++)
	{
		cout << nums1[i] << endl;
	}

}