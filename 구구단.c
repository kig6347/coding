#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//N�� �Է¹��� ��, ������ N���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��� ���Ŀ� ���缭 ����ϸ� �ȴ�.
int main() {
	int num;
	scanf("%d", &num);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}

	return 0;

}