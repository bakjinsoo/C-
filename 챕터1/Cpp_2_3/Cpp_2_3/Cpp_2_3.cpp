#include<iostream>
#include<cfloat>
using namespace std;
int main()
{
	//�ε��Ҽ��� 
	float num0 = 1.5;
	float num1 = num0 * 1.5;
	float num2 = num0 / 2;
	float num3 = num0 - 3;

	cout << "num0 " << num0 << endl;
	cout << "num1 " << num1 << endl;
	cout << "num2 " << num2 << endl;
	cout << "num3 " << num3 << endl;
	//�ε��Ҽ��� : �Ҽ��� �����δ�. 
	// float 32bit double 64bit long double 64~128bit long double�ڷ����� �����Ϸ�, ����,�÷������� �ٸ�
	// ��ȣ ������ ������
	// ������ 2���� ����ϴ¹� 127�� 0���� ����
	//
	unsigned int num0_;
	float num1_ = -118.625;
	memcpy(&num0_, &num1_, sizeof(num1_));
	cout << num0_ << endl;
	cout << num1_ << endl;
	//�ε��Ҽ��� �����ؾ�����
	//if������ == �񱳿����� ���� ���� : ��ǻ�ʹ� �Ҽ����� �ٻ��� ���� ��Ÿ��
	// �������� ��Ÿ���� ���ϹǷ� ==�񱳿��� �Ұ���
	// �Ʒ� ��¹��� ������.
	float num5 = 0.1f;
	float num6 = 0.02f*5.0f;
	cout.precision(64);
	cout << num5 << endl;
	cout << num6 << endl;

	float num7 = 1.0f;
	float num8 = 1.0f;
	for (int i = 0; i < 1000; i++)
		num7 = num7 + 0.001f;
	if (fabsf(num7 - num8) <= FLT_EPSILON)//fabsf ���밪 �ε��Ҽ����� �������� ũ�⶧���� ==(����)�񱳿����� ���� �ʴ°� ����
		cout << "Equal1" << endl;
	//float�ڷ����� �Ǵٸ� ��������
	// ���е��� �䱸�ϴ� ������ �Ҷ��� �ε��Ҽ����� ����ϸ� �ȵ� 
	// ���� �� ��ûū ũ���� �ڷ����� 1�� �������� 1�� �ȴ������� ��Ȳ�� �߻���.
	// �������� ������ �����Ҽ� �ִ� ���ɼ� ����
	// ������ ����� ���Ѵٸ� �����Ҽ���, int �ڷ���, �����ѿ����� ���� ���̺귯���� ����ؾ���
	
	float fltMin = FLT_MIN;
	float flotTrueMin = FLT_TRUE_MIN;
	//fltmin�� �����ο� 1�� ���� 
	//flttruemin �����ο� 1�� ���� ���ܻ�Ȳ : ������� 10^-127�̾��������, 10^-126���� ������.
}