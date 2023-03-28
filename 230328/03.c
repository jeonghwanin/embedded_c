/*
 * 03.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>

int main(void){
	unsigned char a = 0b10000000;
	a &= ~(1<<7);
	a |= (1<<0);
	a |= (0b111111 <<2);
	a &= ~(0b11<<5);
	a &= ~(1<<3);
	printf("%x", a);
}

