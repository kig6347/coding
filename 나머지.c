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
% ������ �����ڴ� ���������� �����ϰ� �Ǽ��� ������ �ʹٸ� 
mAth.h �� ����� �߰��ϰ� fmod, fmodf,fmodl �Լ��� ���Ҽ� �ֽ��ϴ�.
*/