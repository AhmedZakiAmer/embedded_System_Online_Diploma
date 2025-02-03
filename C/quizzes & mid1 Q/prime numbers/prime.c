/*
 * prime.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"
void prime(int num1, int num2) {
	int i, j, f = 0;
	printf("output: ");
	for (i = num1; i < num2; ++i) {
		if (i == 1 || i == 2) {
			printf("%d ", i);
			continue;
		}
		f = 1;
		for (j = 2; j <= i / 2; ++j) {
			if (i % j == 0) {
				f = 0;
				break;
			}
			f = 1;
		}
		if (f) {
			printf("%d ", i);
		}
	}
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num1, num2;
	printf("input n1:");
	scanf("%d", &num1);
	printf("n2:");
	scanf("%d", &num2);
	prime(num1, num2);
	return 0;
}
