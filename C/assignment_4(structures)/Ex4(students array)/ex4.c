/*
 * ex4.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

typedef struct {
	char name[20];
	int roll;
	int marks;
} Students;

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	Students student[10];
	int i;
	printf("Enter info of students\n");
	for (i = 0; i < 10; i++) {
		printf("for roll number%d\n",i+1);
		printf("Enter name: ");
		scanf("%s", student[i].name);
		printf("Enter marks: ");
		scanf("%d", &student[i].marks);
		printf("\n");
	}
	printf("displaying info for students\n");
	for (i = 0; i < 10; i++) {
		printf("info for roll number%d:\n",i+1);
		printf("name: %s\n", student[i].name);
		printf("marks: %d\n", student[i].marks);
	}

	return 0;
}
