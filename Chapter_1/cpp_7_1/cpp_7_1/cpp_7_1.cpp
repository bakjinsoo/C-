#include<iostream>

using namespace std;
union Union
{
	int i;
	float f;
	double d;
};
int main()
{
	//������
	Union u;
	int* ip = (int*)&u;
	float* fp = (float*)&u;
	double* dp = (double*)&u;
}