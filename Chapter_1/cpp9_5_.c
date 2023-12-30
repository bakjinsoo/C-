#include<stdlib.h>
#include<iostream>
using namespace std;
void swap(int& px, int& py)
{
	int temp = px;
	px = py;
	py = temp;
}

struct Weapon {
	int price;
	int power;
};
void upgrade(Weapon& pWeapon) {
	pWeapon.power += 10;
	pWeapon.price += 10;
}
void print(const Weapon& pWeapon) {
	cout << pWeapon.power << endl;
	cout << pWeapon.price << endl;
}
int main()
{
	int x = 10, y = 20;
	swap(x, y);

	cout << x << endl;
	cout << y << endl;
	cout << "------------------" << endl;
	Weapon weapon = { 10,20 };
	upgrade(weapon);
	print(weapon);
	const int& ref = 10;
	//const 레퍼런스는 변수로만 전달 될 뿐만아니라 값으로도 전달 가능

}