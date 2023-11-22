#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable : 4996)


int main()
{
	int n;
	scanf("%d", &n);
	int num[1000];
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i-1; j++) {
			if (num[j] > num[j+1]) {
				int tmp = num[j];
				num[j] = num[j+1];
				num[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", num[i]);
	}
}