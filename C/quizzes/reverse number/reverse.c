/*
 * reverse.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"
void reverse(int num) {
	int mod, res = 0;
	while (num >= 1) {
		mod = num % 10;
		num /=10;
		res = res* 10 + mod;
	}
	printf("output: %d", res);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num;
	printf("input :");
	scanf("%d", &num);
	reverse(num);
	printf("\ninput:");
	scanf("%d", &num);
	reverse(num);
	return 0;
}
