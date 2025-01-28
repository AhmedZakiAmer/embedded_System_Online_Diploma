/*
 * q3.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"
#include "string.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char str[26], *ptr;
	int size,i;
	printf("Enter a string: ");
	scanf("%s",str);
	size = strlen(str);
	ptr = str;
	for (i = size-1; i >=0 ; --i) {
		printf("%c ",*(ptr+i));
	}
	return 0;
}

