#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	unsigned short a, b;
	scanf("%hd,%hd", &a, &b);
	printf("%d\n", a+b);
	printf("%d\n", a-b);
	printf("%d\n", a*b);
	printf("%d\n", a/b);
	printf("%d\n", a%b);

	return 0;
}
/*
short 를 입력받으려면 %hd를
unsigned int 를 받으려면 %u를 입력한다.

h는 자료형을 한 단계 감소시키지만 ㅣ(엘)은 자료형을 한 단계 증가 시킵니다.
*/