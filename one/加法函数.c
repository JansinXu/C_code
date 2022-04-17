#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int ADD(int num1, int num2) {
	int sum = 0;
	return sum = num1 + num2;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	int sum = ADD(num1, num2);
	printf("%d", sum);
	return 0;
}
