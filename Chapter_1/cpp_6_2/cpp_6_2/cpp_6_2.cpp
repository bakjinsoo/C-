#include<iostream>

using namespace std;

int main()
{
	//������ �迭
	int matrix[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int matrix1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int matrix2[3][3] = { 0 };

	//memcpy(&matrix2,&matrix,sizeof(matrix)); �迭 ����

	for (int i = 0; i < 3; i++)//����� ��
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				matrix2[i][j] += matrix[i][k] * matrix1[k][j];
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			cout << matrix2[i][j] << " ";
		}
		cout << endl;
	}

	//������ �迭�� �޸𸮿��� ���������� ���� ��¥�� 2�������� �ִ°� �ƴ� ũ�Ⱑ Ŀ���ٰ� �����ϸ� ����

	// int nums[3][3]
	//int, int ,int int, int ,int int, int ,int

	//��뷮�� ������ ó�� �������� i,j�� ���� ���̴� ĳ�ø޸��� ������� ���� �޸� ��뷮 ������ ���ÿ����÷ο찡 �Ͼ
	//���ÿ����÷ο�� ������ ������ �ʷ�
	//�����ڵ�� �ƴ�
}