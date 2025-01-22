/*
 * ex1.c
 *
 *  Created on: Jan 20, 2025
 *      Author: ahmed
 */

#include "stdio.h"

void prime(int num1,int num2){
	int i,j,f=0;
	printf("prime numbers between %d and %d are: ",num1,num2);
	for (i = num1 + 1; i < num2; ++i) {
		for (j = 2; j < i/2 ; ++j) {
			if (i % j == 0){
				f = 0;
				break;
			}
			f = 1;
		}
		if (f) {
			printf("%d ",i);
		}
	}
}

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	int num1,num2;
	printf("Enter two numbers(intervals): ");
	scanf("%d %d",&num1,&num2);
	prime(num1,num2);

}
