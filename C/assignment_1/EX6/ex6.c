/*
 * ex6.c
 *
 *  Created on: Jan 16, 2025
 *      Author: ahmed
 */


# include "stdio.h"

int main(void) {
	int num,i=1,sum=0 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	for(i ; i<=num ; i++){
		sum += i;
	}
	printf("Sum = %d",sum);
	return 0;
}
