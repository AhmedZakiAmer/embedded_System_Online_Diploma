/*
 * ex1.c
 *
 *  Created on: Jan 19, 2025
 *      Author: ahmed
 */

# include "stdio.h"
#include "string.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char string[50];
	char alpha;
	int count = 0,i;
	printf("Enter a sting: ");
	gets(string);
	printf("Enter a character to find frequency: ");
	scanf("%c", &alpha);
	for (i = 0; string[i] != '\0'; ++i) {
		if(string[i] == alpha){
			count++;
		}
	}
	printf("frequency of %c = %d",alpha,count);
	return 0;
}

