/*
 * ex6.c
 *
 *  Created on: Jan 16, 2025
 *      Author: ahmed
 */


# include "stdio.h"

int main(void) {
	int num,i,sum=0 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	for(i =1; i<=num ; i++){
		sum += i;
	}
	printf("Sum = %d",sum);
	return 0;
}
