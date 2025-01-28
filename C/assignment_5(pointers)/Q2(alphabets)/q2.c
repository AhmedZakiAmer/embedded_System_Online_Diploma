/*
 * q2.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char alph[26], *ptr;
	int i;
	for (i = 0; i < 26; ++i) {
		alph[i] = 'A' + i;
	}
	ptr = alph;
	for (i = 0; i < 26; ++i) {
		printf("%c ",*(ptr+i));
	}
	return 0;
}
