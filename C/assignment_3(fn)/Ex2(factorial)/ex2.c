/*
 * ex2.c
 *
 *  Created on: Jan 20, 2025
 *      Author: ahmed
 */

#include "stdio.h"

void factorial(int num1){
	int i,product = 1;
	for (i = 2; i <= num1; ++i) {
		product *= i;
	}
	printf("Factorial of %d =  %d",num1,product);
}

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	int num1;
	printf("Enter an postive integer: ");
	scanf("%d",&num1);
	factorial(num1);

}
