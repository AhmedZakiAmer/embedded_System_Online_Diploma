/*
 * sum.c
 *
 *  Created on: Feb 2, 2025
 *      Author: ahmed
 */

#include "stdio.h"
void sumDigits(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	printf("output:%d", sum);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num;
	printf("input:");
	scanf("%d", &num);
	sumDigits(num);
	printf("\ninput:");
	scanf("%d", &num);
	sumDigits(num);
	return 0;
}
