#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x=0, y=0;
	scanf("%d\n%d", &x, &y);
	
	if (x > (-1000) && x < 1000 && y >(-1000) && y < 1000 && x != 0 && y != 0) {
		if (x > 0) {
			if (y > 0)
				printf("1\n");
			else
				printf("4\n");
		}
		else {
			if (y > 0)
				printf("2\n");
			else
				printf("3\n");
		}
	}
	else
		printf("error");
	
	return 0;
}