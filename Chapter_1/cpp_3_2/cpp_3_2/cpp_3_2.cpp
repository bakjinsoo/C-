#pragma warning(disable:4996)

#include<cstdio>

int main()
{
	int num;
	scanf("%d", &num);//scanf ���� ���� pragma warning���� ��ȸ
	printf("%d", num);
	//int���� �ƴ� �ڷ����� �ִ´ٸ� �����Ⱚ�� ����.(num�� �ʱ�ȭ ������ ���� ���)
	//lf doble��
	//f float��
	// &�� void �ڷᰡ ���������� ������ ���ϱ� ������ %d, %lf %f���� �������� �ڷ����� ��������
	// %o �� 8���� �ڷ���
	// %x�� 16���� �ڷ���
	// %c�� ���͵� ���� �� ���� �������� char �ڷ����� scanf�Ҷ� �����ؾ���
	freopen("input.txt", "r", stdin);//r�� �аڴ� ���Ϸ� �����Ҽ� �ִ�. txt������ ����

}