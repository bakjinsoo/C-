#include<iostream>

using namespace std;
int main()
{
	char ch;
	cin >> ch;
	switch (ch)//switch case는 integer형(정수형)만 가능 'a'같은 경우는 ascii코드로 받으므로 가능, "a"는 불가능 문자형이라서
	{
	case 'A':
		cout << "convert a" << endl;
		[[fallthrough]];//어트리뷰트를 하는것을 알려주는 문
	case 'a':
		cout << "kimchi" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Korean BBQ" << endl;
		break;
	case 'C':
	case 'c':
		cout << "Chicken" << endl;
		break;
	default:
		cout << "invalid Input" << endl;
		break;
	}
	//switch 인지가 쉬움(가독성)
}