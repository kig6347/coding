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
short �� �Է¹������� %hd��
unsigned int �� �������� %u�� �Է��Ѵ�.

h�� �ڷ����� �� �ܰ� ���ҽ�Ű���� ��(��)�� �ڷ����� �� �ܰ� ���� ��ŵ�ϴ�.
*/