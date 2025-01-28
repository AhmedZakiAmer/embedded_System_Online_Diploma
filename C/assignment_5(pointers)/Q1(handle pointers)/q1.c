/*
 * q1.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int m = 29;

	printf("address m : %p\n", &m);
	printf("value of  m : %d\n", m);
	int *ab = &m;
	printf("address of pointer ab : %p\n", ab);
	printf("content of  pointer ab : %d\n", *ab);
	m = 34;
	printf("now the value of m assigned to 34:\n");
	printf("address of pointer ab : %p\n", ab);
	printf("content of  pointer ab : %d\n", *ab);
	*ab = 7;
	printf("now the pointer value is assigned to 7:\n");
	printf("address m : %p\n", &m);
	printf("value of  m : %d\n", m);
	return 0;
}
