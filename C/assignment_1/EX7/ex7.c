/*
 * ex7.c
 *
 *  Created on: Jan 16, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void) {
	int num,i,sum=1 ;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d", &num);
	if(num < 0){
		printf("Error!! Factorial of negative number dosn't exist.");
	}else if (num == 0  || num == 1){
		printf("Factorial of this number dosn't exist.");
	}else {
		i = num;
		for(; i > 1; i--){
			sum *= i;
		}
		printf("Sum = %d",sum);
	}
	return 0;
}
