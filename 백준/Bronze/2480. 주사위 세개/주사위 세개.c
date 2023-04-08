#include <stdio.h>
#pragma warning(disable: 4996)

int main(void) {
	int a, b, c;
	int price;
	int max = 0;

	scanf("%d %d %d", &a, &b, &c);

	if (a == b) {
		if (a == c) { //3개 같은 경우
			price = 10000 + a * 1000;
			printf("%d", price);
		}
		else { //2개 같은 경우
			price = 1000 + a * 100;
			printf("%d", price);
		}
	}
	else if(a == c) {
		price = 1000 + a * 100;
		printf("%d", price);
	}
	else if (b == c) {
		price = 1000 + b * 100;
		printf("%d", price);
	}
	else {
		max = a > b ? a : b;
		max = max > c ? max : c;
		price = max * 100;
		printf("%d", price);
	}

	return 0;
}