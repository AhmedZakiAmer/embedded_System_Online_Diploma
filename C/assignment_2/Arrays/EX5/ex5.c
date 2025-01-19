/*
 * ex5.c
 *
 *  Created on: Jan 18, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, j, n, m;
	printf("Enter number of elements : ");
	scanf("%d", &n);
	int arr[n];
	for (i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	printf("Enter the element to be searched : ");
	scanf("%d", &m);
	for (i = 0 ; i < n; ++i) {
		if (arr[i] == m) {
			printf("%d", i+1);
			break;
		}
	}
	if(i == n){
		printf("not found");
	}
	return 0;
}
