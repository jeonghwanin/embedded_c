/*
 * 09.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
#include <string.h>

void insertStr(char *result, char*vect, char*str, int n){
	strncpy(result, vect, 3);
	result[n] = '\0';
	vect += 3;
	strcat(result, str);
	strcat(result, vect);
}

int main(void){
	char vect[10] = "ZXXVQ";
	char result[10];
	insertStr(result, vect, "ABC",2);
	printf("%s", result);
}

