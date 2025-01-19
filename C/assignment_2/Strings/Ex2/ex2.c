/*
 * ex2.c
 *
 *  Created on: Jan 19, 2025
 *      Author: ahmed
 */

# include "stdio.h"
#include "string.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char string[50];
	int count = 0,i;
	printf("Enter a sting: ");
	gets(string);
	for (i = 0; string[i] != '\0'; ++i) {
			count++;
	}
	printf("Length of string: %d",count);
	return 0;
}
