#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
*/

int main() {
	int num;
	int jun[10][2];

	scanf("%d", &num);
	//printf("num=%d\n", num);
	for (int i = 0; i < num; i++) {
		//printf("두수 입 력");
		scanf("%d %d", &jun[i][0], &jun[i][1]);
		//printf("i=%d\n",i);
	}
	for (int j = 0; j < num; j++) {
		printf("%d\n", jun[j][0] + jun[j][1]);
	}

	return 0;
}

