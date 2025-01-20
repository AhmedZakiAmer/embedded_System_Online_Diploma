/*
 * ex4.c
 *
 *  Created on: Jan 20, 2025
 *      Author: ahmed
 */

# include "stdio.h"
# include "math.h"
void power(int base,int num) {
	int res;
	res = pow(base,num);
	printf("%d^%d = %d",base,num,res);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int num, base;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter power number(positive integer): ");
	scanf("%d", &num);
	power(base,num);

	return 0;
}
