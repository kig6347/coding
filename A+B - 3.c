#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)
*/

int main() {
	int num;
	int jun[10][2];

	scanf("%d", &num);
	//printf("num=%d\n", num);
	for (int i = 0; i < num; i++) {
		//printf("�μ� �� ��");
		scanf("%d %d", &jun[i][0], &jun[i][1]);
		//printf("i=%d\n",i);
	}
	for (int j = 0; j < num; j++) {
		printf("%d\n", jun[j][0] + jun[j][1]);
	}

	return 0;
}

