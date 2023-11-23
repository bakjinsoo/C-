#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

int main()
{
	int n, k;
	int x[10000];
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (x[j] > x[j + 1]) {
				int tmp = x[j];
				x[j] = x[j + 1];
				x[j + 1] = tmp;
			}
		}
	}
	printf("%d", x[n - k]);
}