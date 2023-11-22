#pragma warning(disable:4996)

#include<cstdio>

int main()
{
	int num;
	scanf("%d", &num);//scanf 보안 문제 pragma warning으로 우회
	printf("%d", num);
	//int형이 아닌 자료형을 넣는다면 쓰레기값이 나옴.(num이 초기화 되있지 않은 경우)
	//lf doble형
	//f float형
	// &는 void 자료가 무슨형인지 전달을 못하기 때문에 %d, %lf %f등의 형식으로 자료형을 전달해줌
	// %o 는 8진수 자료형
	// %x는 16진수 자료형
	// %c는 엔터도 받을 수 있음 연속으로 char 자료형을 scanf할때 주의해야함
	freopen("input.txt", "r", stdin);//r은 읽겠다 파일로 연결할수 있다. txt파일을 만들어서

}