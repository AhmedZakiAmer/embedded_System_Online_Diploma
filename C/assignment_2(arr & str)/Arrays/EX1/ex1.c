/*
 * ex1.c
 *
 *  Created on: Jan 16, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void) {
	float mat1[2][2], mat2[2][2], sum[2][2] = {0};
	int i, j;
	printf("Enter the elements of 1st matrix\n");
	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 2; ++j) {
			printf("Enter a%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &mat1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 2; ++j) {
			printf("Enter b%d%d: ", i+1, j+1);
			fflush(stdout);
			scanf("%f", &mat2[i][j]);
			sum[i][j] += mat1[i][j] + mat2[i][j];
		}
	}
	printf("Sum of Matrix:\n");
	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 2; ++j) {
			printf("%.1f	", sum[i][j]);
		}
		printf("\n");
	}
	return 0;
}
