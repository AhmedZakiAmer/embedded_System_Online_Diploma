/*
 * reverseString.c
 *
 *  Created on: Feb 3, 2025
 *      Author: ahmed
 */

#define SIZE 30

#include "stdio.h"
#include "string.h"
int countWord = 1;
void count(char *str) {
	char *strC = str;
	while (*strC != '\0') {
		if (*strC == ' ') {
			countWord++;
		}
		strC++;
	}
}
char* handle(char *str) {
	int size;
	char *temp;
	size = strlen(str);
	temp = (str + size);
	while (*temp != ' ' && str != temp) {
		temp--;
	}
	if (countWord > 1) {
		*temp = '\0';
	} else {
		temp--;
	}
	return temp + 1;
}
void swap(char *str) {
	char str2[SIZE] = "";
	while (countWord) {
		strcat(str2, handle(str));
		strcat(str2, " \0");
		countWord--;
	}
	strcpy(str, str2);
	printf("output: %s", str);
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char str[SIZE];
	printf("input: ");
	gets(str);
	count(str);
	swap(str);
	return 0;
}
