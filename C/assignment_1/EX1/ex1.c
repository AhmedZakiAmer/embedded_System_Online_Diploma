/*
 * ex1.c
 *
 *  Created on: Jan 13, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void){
	int num ;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&num);
	num % 2 ==0 ? printf("%d is even",num):printf("%d is odd",num);

	return 0 ;
}
