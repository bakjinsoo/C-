#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b)(a)
typedef int element;
typedef struct TreeNode {
	element key;
	struct TreeNode* left, *right;
}TreeNode;

TreeNode* search(TreeNode* node, int key) {
	if (node == NULL)return NULL;

	printf("key : %d \n", key);
	if (key == node->key)return node;
	else if (key < node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
}
TreeNode* new_node(int item) {
	TreeNode* tmp = (TreeNode*)malloc(sizeof(TreeNode));
	tmp->key = item;
	tmp->left = tmp->right = NULL;
	return tmp;
}
TreeNode* insert_node(TreeNode* node, int key) {
	if (node == NULL) return new_node(key);
	printf("Node Data : %d Data : %d \n", node->key,key);
	if (key < node->key)
		node->left = insert_node(node->left, key);
	else if (key > node->key)
		node->right = insert_node(node->right, key);

	return node;
}

TreeNode* min_value_node(TreeNode* node) {
	TreeNode* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

TreeNode* delete_node(TreeNode* root, int key) {
	if (root == NULL)return root;

	if (key < root->key)
		root->left = delete_node(root->left, key);
	else if (key > root->key)
		root->right = delete_node(root->right, key);
	else {
		if (root->left == NULL) {
			TreeNode* tmp = root->right;
			free(root);
			return tmp;
		}
		else if (root->right == NULL) {
			TreeNode* tmp = root->left;
			free(root);
			return tmp;
		}
		TreeNode* tmp = min_value_node(root->right);

		root->key = tmp->key;
		root->right = delete_node(root->right, tmp->key);
	}
	return root;
}
int get_height(TreeNode* node) {
	int height = 0;
	if (node != NULL) {
		height = 1 + MAX(get_height(node->left), get_height(node->right));
	}
	return height;
}
int get_balance(TreeNode* node) {
	if (node == NULL)return 0;
	return get_height(node->left) - get_height(node->right);
}
void inorder(TreeNode* root) {
	if (root) {
		inorder(root->left);
		printf("[%d] (Left: %d, Right: %d) \n", root->key, (root->left ? root->left->key : -1), (root->right ? root->right->key : -1));
		inorder(root->right);
		int a = get_balance(root);
		printf("���̳ʽ� : %d\n", a);
	}
}

int main()
{
	TreeNode* root = NULL;
	TreeNode* tmp = NULL;
	root = insert_node(root, 30);
	root = insert_node(root, 20);
	root = insert_node(root, 10);
	root = insert_node(root, 40);
	root = insert_node(root, 50);
	root = insert_node(root, 60);

	printf("��� \n");
	inorder(root);
	if (search(root, 30) != NULL)
		printf("����Ž�� Ʈ������ 30 �߰�\n");
	else
		printf("����Ž�� Ʈ������ 30 �߰߸���\n");
}