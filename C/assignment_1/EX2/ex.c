/*
 * ex.c
 *
 *  Created on: Jan 14, 2025
 *      Author: ahmed
 */


# include "stdio.h"

int main(void){
	char alpha ;
	int flag = 0;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&alpha);
	if (alpha >= 'A' && alpha <= 'Z'){
		alpha += 32;
		flag = 1;
	}
	if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u'){
		printf("%c is a vowel.",alpha);
	}else {
		if(flag){
			alpha -= 32;
		}
		printf("%c is a consonant.",alpha);
	}


	return 0 ;
}
