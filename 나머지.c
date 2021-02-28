#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	unsigned long int A, B, C;
	scanf("%d %d %d", &A, &B, &C);  //5,8,4
	if(A>=2 && A<=10000&& B>=2 && B <= 10000&& C>=2 && C <= 10000){
		printf("%d\n", (A + B) % C);
		printf("%d\n", ((A % C) + (B % C)) % C);
		printf("%d\n", (A * B) % C);
		printf("%d\n", ((A % C) * (B % C)) % C);
	}
	return 0;
}

/*
% 나머지 연산자는 정수에서만 가능하고 실수를 나누고 싶다면 
mAth.h 의 헤더를 추가하고 fmod, fmodf,fmodl 함수로 구할수 있습니다.
*/