/*
 * uniqueNumber.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#include "stdio.h"

void unique(int *a, int s) {
	unsigned char freq[255] = { 0 };
	int i;
	for (i = 0; i < s; ++i) {
		freq[(unsigned char) a[i]]++;
	}
	for (i = 0; i < s; i++) {
		if (freq[(unsigned char) a[i]] == 1) {	// some help
			printf("%d ", a[i]);
		}
	}
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int s1, s2, i;
	printf("Enter array size:");
	scanf("%d", &s1);
	int a[s1];
	printf("input array:");
	for (i = 0; i < s1; ++i) {
		scanf("%d", &a[i]);
	}
	unique(a, s1);
	printf("\nEnter array size:");
	scanf("%d", &s2);
	int a2[s2];
	printf("input array:");
	for (i = 0; i < s2; ++i) {
		scanf("%d", &a2[i]);
	}
	unique(a2, s2);
	return 0;
}
