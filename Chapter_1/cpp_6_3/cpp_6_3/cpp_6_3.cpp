#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	//문자열
	//문자열 배열은 null문자가 항상 마지막에 붙어야함
	char str[] = "abc";
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << "sizeof : " << sizeof(str) << endl;

	str[1] = 0;
	cout << str[0] << endl;
	cout << str[1] << endl;
	cout << str[2] << endl;
	cout << str[3] << endl;
	cout << "strlen : " << strlen(str) << endl;

	cout << str << endl;

	//문자열의 끝은 항상 null문자가 나옴
	char str2[] = "hello";
	char str3[100] = "hello";
	int result = strcmp(str2, str3);//string 비교 함수 0이나오면 true
	cout << result << endl;
	
}