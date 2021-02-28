#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	unsigned int a, b;
	
	scanf("%d\n%d", &a, &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b/10) % 10));
	printf("%d\n", a * ((b/100) % 10));
	printf("%d\n", a * b);

	return 0;
}