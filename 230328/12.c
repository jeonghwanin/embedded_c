/*
 * 12.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char s[100];
	const char* vect = "DATA|32ALL|0|200|100|ABABC|200";
	int a = 0;
	int b = 0;
	while(vect[a] != '\0'){
		if(vect[a] != '|')
			s[b++] = vect[a++];

	}
}




