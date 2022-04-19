
#include <stdio.h>


#include <stdio.h>
//Ò»
//int Max(int a, int b) {
//	int c = 0;
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//¶þ
int Max(int a, int b) {
	return (a >= b) ? a : b;
}

int main() {
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	printf("%d", Max(a, b));
	return 0;
}

