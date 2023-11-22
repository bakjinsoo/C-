#include<iostream>
using namespace std;

int main()
{
	cout << 40 - 32 / 2 << "==" << 24 << endl;// 컴퓨터는 연산자 우선순위에의해 계산하게 됨
	
	cout << 4 - 6 + 2 + 8 / 2 / 2 * 2;

	int a, b, c;
	a = b = c = 10;//할당
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//int a = 10;//초기화 c식
	//int a(10);//c++식 초기화
	//초기화와 할당 연산자 구분 조심하기

	cout << -+-+-+1<<endl;//단항연산자 연산 우선순위가오른쪽에서 왼쪽으로 가는거 조심
	int num = 0;
	//num++;//후위연산자
	//--num;//전위연산자
	cout << num++ << endl;//결과값을 그 다음항에 넣어줌(후위 연산자)
	cout << num << endl;

	//주의해야할 점
	int num1 = 10;
	cout << ++num + num++ << endl;
	cout << num << endl;
	printf("%d %dn", ++num, ++num);
	printf("%d\n", num);
	//변수 변경할때 하나의 변수를 한식에서두번 변경할때는 주의해야함 (undefined behavior) 각 컴파일러에서 똑같은 행동을 한다는 보장이 없음
	//한행에서 하나의 변수에 연산을 두번이상 하면 안됌.
}