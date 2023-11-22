#include<iostream>

using namespace std;

int main()
{
	//다차원 배열
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

	//memcpy(&matrix2,&matrix,sizeof(matrix)); 배열 복사

	for (int i = 0; i < 3; i++)//행렬의 곱
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

	//다차원 배열은 메모리에서 순차적으로 있음 진짜로 2차원으로 있는게 아님 크기가 커진다고 생각하면 편함

	// int nums[3][3]
	//int, int ,int int, int ,int int, int ,int

	//대용량의 데이터 처리 과정에서 i,j의 순서 차이는 캐시메모리의 사용으로 인해 메모리 사용량 증가로 스택오버플로우가 일어남
	//스택오버플로우는 컴파일 에러를 초래
	//좋은코드는 아님
}