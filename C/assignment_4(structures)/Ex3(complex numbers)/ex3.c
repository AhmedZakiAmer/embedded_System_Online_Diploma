/*
 * ex3.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

typedef struct {
	float real;
	float img;
} Complex;

void addComplex(Complex *n1, Complex *n2) {
	printf("sum = %.1f+%.1fi", n1->real+n2->real,n1->img+n2->img);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	Complex n1, n2;
	printf("for 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f", &n1.real, &n1.img);

	printf("for 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f%f", &n2.real, &n2.img);
	addComplex(&n1, &n2);

	return 0;
}
