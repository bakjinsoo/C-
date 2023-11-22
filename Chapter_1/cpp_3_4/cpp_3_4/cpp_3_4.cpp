#include<iostream>

using namespace std;
int main()
{
	int a;
	cin >> a;
	cout << a << endl;
	//입출력 라이브러리 iostream
	//
	char ch;
	cin >> ch;
	cout << ch << endl;
	cin.ignore();// 여러개 입력했을때 크기만큼 무시
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	cin >> ch;
	cout << ch << endl;

	//cin.fail 입력 받은게 실패한지 아닌지 체크하는 함수
	//cin.clear 입력받은거 지워주는 함수

}