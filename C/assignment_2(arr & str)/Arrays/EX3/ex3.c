/*
 * ex3.c
 *
 *  Created on: Jan 17, 2025
 *      Author: ahmed
 */

# include "stdio.h"

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, j, n, m;
	printf("Enter rows and column of matrix: ");
	scanf("%d %d", &n, &m);
	int mat1[n][m];
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			printf("Enter a%d%d: ", i + 1, j + 1);
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("Entered Matrix: \n");
	for (i = 0; i < n; ++i) {
		for (j = 0; j < m; ++j) {
			printf("%d	", mat1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix: \n");
		for (i = 0; i < m; ++i) {
			for (j = 0; j < n; ++j) {
				printf("%d	", mat1[j][i]);
			}
			printf("\n");
		}
	return 0;
}

