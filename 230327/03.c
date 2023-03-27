/*
 * 03.c
 *
 *  Created on: 2023. 3. 27.
 *      Author: SSAFY
 */
#include <stdio.h>


int main(void){
	unsigned char a = 0b11110101;


	unsigned char b0 = 0;
	unsigned char b5 = 0;
	unsigned char b67 = 0;

	b0 = (unsigned char) (a>>0)&1;
	b5 = (unsigned char) (a>>5)&1;
	b67 = (unsigned char) (a>>6)&0b11;
	printf("b5 = %x\nb6 = %x\nb67= %x\n", b5, b0, b67);



}



