/*
 * sum.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"
int sum(int num1,int num2) {
	if (num1 == num2){
		return 1;		// we start with 2 as num++ comes before return
	}
	num1 ++;
	return num1+sum(num1,num2);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int res;
	res = sum(1,100);
	printf("result: %d",res);
	return 0;
}
