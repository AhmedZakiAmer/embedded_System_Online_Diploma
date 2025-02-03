/*
 * maxOnes.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"

void maxOnes(char *num) {
	int count = 0, max = 0;
	while (*num != '\0') {
		if (*num  == '1') {
			count++;
			if (count > max) {
				max = count;
			}
		} else {
			count = 0;
		}
		num++;
	}
	printf("output: %d", max);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char num[20];
	printf("input:");
	gets( num);
	maxOnes(num);
	printf("\ninput:");
	gets( num);
	maxOnes(num);
	return 0;
}
