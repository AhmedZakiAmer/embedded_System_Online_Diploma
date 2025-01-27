/*
 * clearBit.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int num,pos;
	printf("Enter the number: ");
	scanf("%d",&num);
	printf("Enter the position: ");
	scanf("%d",&pos);

	num &= ~(1<<pos);
	printf("%d",num);
	return 0;
}

