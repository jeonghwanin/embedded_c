/*
 * 02.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
int main(void){
	unsigned char a = 0b11000000;
	unsigned char a3set = 0;
	unsigned char a5set = 0;
	unsigned char a0set = 0;
	a3set = a | (1<<3);
	a5set = a | (1<<5);
	a0set = a | (1<<0);
	printf("%x\n", a3set);
	printf("%x\n", a5set);
	printf("%x\n", a0set);
}



