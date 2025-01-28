/*
 * q4.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int n, i;
	printf("Enter size of array:");
	scanf("%d", &n);
	int arr[n],*ptr;
	printf("Enter a%d of element: \n",n);
	for (i = 0; i <n; ++i) {
		printf("element - %d :",i+1);
		scanf("%d",&arr[i]);
	}
	ptr = arr;
	printf(" The elements of array in reverse order are : \n");
	for (i = n - 1; i >= 0; --i) {
		printf("element - %d :%d\n", i+1,*(ptr + i));
	}
	return 0;
}

