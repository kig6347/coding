#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a;
	scanf("%d", &a);

	if (a > 0 && a <= 100)
	{
		switch (a / 10)
		{
		case 10: {
			printf("A\n");
			break;
		}
		case 9: {
			printf("A\n");
			break;
		}
		case 8: {
			printf("B\n");
			break;
		}
		case 7: {
			printf("C\n");
			break;
		}
		case 6: {
			printf("D\n");
			break;
		}
		default: {
			printf("F\n");
			break;
		}
		}
	}

	return 0;
}