/*
 * 06.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
#include <string.h>

int main(void){
	char buf[10];
	int bn = 0;

	for(int i=17; i!= 0; i/=2)
		buf[bn++] = (i%2) + '0';
	for(int i = strlen(buf)-1; i>=0; i--){
		printf("%c", buf[i]);
	}
}



