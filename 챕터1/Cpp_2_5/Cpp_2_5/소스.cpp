#include<iostream>
#include<limits>
using namespace std;
int main()
{
	char ch0 = 'a';
	char ch1 = 97;
	cout << "ch0 : " << ch0 << endl;
	cout << "ch1 : " << ch1 << endl;

	cout << "ch0 : " << (int)ch0 << endl;
	cout << "ch1 : " << int(ch1) << endl;

	cout << (int)numeric_limits<uint8_t>::max() << endl;
}