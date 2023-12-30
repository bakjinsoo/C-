#include<iostream>
#include<string>
using namespace std;

int countDigit(int num) {
	if (num == 0)
		return 1;
	int count = 0;
	while (num) {
		num /= 10;
		++count;
	}
	return count;
}

int countDigit(string num) {//파라미터의 타입이 다르면 내가 만든 함수를 한번 더 쓸수 있게
	//함수의 오버로딩
	return countDigit(stoi(num));
}
int main()
{
	cout << countDigit(12345) << endl;
	cout << countDigit("12345") << endl;
}