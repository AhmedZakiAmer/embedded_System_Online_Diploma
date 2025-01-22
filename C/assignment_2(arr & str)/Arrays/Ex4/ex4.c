/*
 * ex4.c
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
	int arr[n + 1 ];
	for (i = 0; i < n; ++i) {
		scanf("%d", &arr[i]);
	}
	n++;
	printf("Enter the element to be inserted: ");
	scanf("%d", &m);
	printf("Enter the location : ");
	scanf("%d", &j);
	j--;
	for (i = n ; i >= j; --i) {
		if (i != j) {
			arr[i] = arr[i - 1];
		} else {
			arr[j] = m;
		}
	}
	for (i = 0; i < n; ++i) {
		printf("%d	", arr[i]);
	}
	return 0;
}




