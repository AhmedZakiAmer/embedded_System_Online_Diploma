/*
 * last_occurrence.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

int search(int *a, int n) {
	int key, i;
	printf("Enter a number to search: ");
	scanf("%d", &key);
	for (i = n - 1; i >= 0; --i) {
		if (a[i] == key) {
			return i;
		}
	}
	return -1;
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int n, res, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int a[n];
	printf("Enter the array: ");
	for (i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	res = search(a, n);
	printf("%d",res);
	return 0;
}
