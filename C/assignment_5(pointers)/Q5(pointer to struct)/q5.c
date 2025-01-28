/*
 * q5.c
 *
 *  Created on: Jan 28, 2025
 *      Author: ahmed
 */

#include "stdio.h"

typedef struct{
	char Name[20];
	int id;
}Employee;

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	Employee e1,*ptrE;
	ptrE = &e1;
	printf("Enter employee name:");
	scanf("%s",ptrE->Name);
	printf("Enter employee ID:");
	scanf("%d",&ptrE->id);
	printf("Employee name:%s \n",ptrE->Name);
	printf("Employee ID:%d \n",ptrE->id);
	return 0;
}
