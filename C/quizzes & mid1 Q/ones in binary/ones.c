/*
 * ones.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"
void ones(int num) {
	int count=0, res = 0,i;
	for (i = 0; i < 32; ++i) {
		res = (num >>i) & 1;
		if(res){
			count++;
		}
	}
	printf("output: %d", count);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num;
	printf("input :");
	scanf("%d", &num);
	ones(num);
	printf("\ninput:");
	scanf("%d", &num);
	ones(num);
	return 0;
}
