#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[5];
	int result = 0;
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
		result += num[i];
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j<5 - i - 1; j++) {
			if (num[j] < num[j + 1]) {
				int tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
	printf("%d\n", result / 5);
	printf("%d", num[2]);

}