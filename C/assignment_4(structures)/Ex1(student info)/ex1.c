/*
 * ex1.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

typedef struct{
	char name[20];
	int roll;
	float marks;
}Students;

int main(void){
	setvbuf(stdout,NULL,_IONBF,0);
	Students student;
	printf("Enter info of student\n");
	printf("Enter name: ");
	scanf("%s",student.name);
	printf("Enter roll number: ");
	scanf("%d",&student.roll);
	printf("Enter marks: ");
	scanf("%f",&student.marks);
	printf("displaying info\n");
	printf("name: %s\n",student.name);
	printf("roll: %d\n",student.roll);
	printf("marks: %.2f\n",student.marks);

	return 0;
}
