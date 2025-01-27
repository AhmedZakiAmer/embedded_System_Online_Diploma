/*
 * swapArrays.c
 *
 *  Created on: Jan 27, 2025
 *      Author: ahmed
 */

#include "stdio.h"
void swap(int *a1, int *a2, int s1, int s2) {
	int i, temp;
	int ss = (s1 > s2) ? s1 : s2; 	//small size
	for (i = 0; i < ss; ++i) {
		temp = a1[i];
		a1[i] = a2[i];
		a2[i] = temp;
	}
	if (s1 > s2) {
		for (i = ss; i < s1; ++i) {
			a2[i] = a1[i];
		}
	} else {
		for (i = ss; i < s2; ++i) {
			a1[i] = a2[i];
		}
	}
	printf("first: ");
	for (i = 0; i < s2; ++i) {
		printf("%d ", a1[i]);
	}
	printf("\nsecond: ");
	for (i = 0; i < s1; ++i) {
		printf("%d ", a2[i]);
	}
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int size1, size2, i;
	printf("Enter the 2 arrays size: ");
	scanf("%d%d", &size1, &size2);
	int arrSize = (size1 > size2) ? size1 : size2;
	int arr1[arrSize], arr2[arrSize];
	printf("Enter the 1st array : ");
	for (i = 0; i < arrSize; ++i) {
		scanf("%d", &arr1[i]);
	}
	printf("Enter the 2nd array : ");
	for (i = 0; i < arrSize; ++i) {
		scanf("%d", &arr2[i]);
	}
	swap(arr1, arr2, size1, size2);

	return 0;
}
