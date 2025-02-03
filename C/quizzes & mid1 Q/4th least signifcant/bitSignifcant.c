/*
 * bitSignifcant.c
 *
 *  Created on: Jan 27, 2025
 *      Author: ahmed
 */


#include "stdio.h"

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int num,bit;
	printf("Enter the number: ");
	scanf("%d",&num);
	bit = (num>>3)&1;
	printf("%d",bit);
	return 0;
}
