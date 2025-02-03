/*
 * power3.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"
#include "math.h"

void power3(int num){
	float res = log(num)/log(3);
	if(round(res)-res == 0 || num ==1){
		printf("0");
	}else{
		printf("1");
	}
}

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	power3(num);
	return 0;
}
