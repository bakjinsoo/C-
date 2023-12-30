#include<iostream>
using namespace std;
int pow(int base, int exp = 2) {
	int result = 1;
	for (int i = 0; i < exp; i++) {
		result *= base;
	}
	return result;
}
struct Person {
	float weight;
	float height;
};
Person p{ 56.2f,175.4f };
void foo(Person p0 = p) {
	cout << p0.height << endl;
	cout << p0.weight << endl;
}
void print(Person* p0 = nullptr) {
	if (p0) {
		cout << p0->weight << endl;
		cout << p0->height << endl;
	}
	else {
		cout << "invalid" << endl;
	}
}
int main() {
	cout << pow(2) << endl;
	
	foo(Person{74.f,183.1f});
	Person p1 = { 72.f,162.f };
	print(&p1);
}