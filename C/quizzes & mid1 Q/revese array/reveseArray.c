/*
 * reveseArray.c
 *
 *  Created on: Jan 27, 2025
 *      Author: ahmed
 */

#include "stdio.h"
void reverseArray(int*arr,int n){
	int i,temp;
	for (i = 0; i < n/2; ++i) {
		temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
	for ( i = 0; i < n; ++i) {
		printf("%d ",arr[i]);
	}
}

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	int n,i;
	printf("Enter the array size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the array: ");
	for (i = 0; i < n; ++i) {
		scanf("%d",&arr[i]);
	}
	reverseArray(arr,n);

	return 0;
}

