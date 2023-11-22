#include<iostream>
using namespace std;

int main()
{
	//논리 연산자 
	// And연산자 OR 연산자 같이 있으면 And연산이 먼저
	if (false && true || true)
		cout << "OK" << endl;
}