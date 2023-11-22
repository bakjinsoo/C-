#include<iostream>

using namespace std;

struct Node
{
	int value;
	Node* left;
	Node* right;
};
void visit(Node* root)
{
	if (root == nullptr)
		return;
	//cout << root->value << endl;//프리오더
	visit(root->left);
	//cout << root->value << endl;//인오더
	visit(root->right);
	//cout << root->value << endl;//포스트오더
}
void count(int n)
{
	if (n < 0)
		return;
	cout <<"Count : " <<n << endl;
	cout << endl;
	count(n - 1);
	cout << "Started : " << n << endl;
	cout << endl;
}
int fac(int n)
{
	if (n == 1)
		return 1;
	return n * fac(n - 1);
}
int fib(int n)
{
	if (n <= 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	//재귀함수
	
	Node node0{ 0 };
	Node node1{ 1 };
	Node node2{ 2 };
	Node node3{ 3 };
	Node node4{ 4 };
	Node node5{ 5 };
	Node node6{ 6 };
	Node node7{ 7 };
	Node node8{ 8 };
	Node node9{ 9 };

	node0.left = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node3.right = &node4;
	node0.right = &node5;
	node5.left = &node6;
	node6.right = &node7;
	node5.right = &node8;
	node8.left = &node9;
	visit(&node0);
	//재귀는 깊숙하게 들어가면 스택오버플로우 일어날 가능성이 높음

}