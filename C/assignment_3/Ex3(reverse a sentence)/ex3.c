/*
 * ex3.c
 *
 *  Created on: Jan 20, 2025
 *      Author: ahmed
 */

# include "stdio.h"
int length_str(char *str) {
	int count = 0, i;
	for (i = 0; str[i] != '\0'; ++i) {
		count++;
	}
	return count;
}
void reverse(char*string){
	char temp;
	int len,i;
	len = length_str(string);
	for (i = 0; i< len/2; ++i) {
			temp = string[len-1-i];
			string[len-1-i] = string[i];
			string[i] = temp;
		}
		printf("%s", string);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char string[50];
	printf("Enter a sentence: ");
	gets(string);
	reverse(string);

	return 0;
}

