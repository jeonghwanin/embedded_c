/*
 * 04.c
 *
 *  Created on: 2023. 3. 27.
 *      Author: SSAFY
 */
//MSB, LSB 추출
#include <stdio.h>
int main(void){

	unsigned char a = 0b11110101;
	unsigned char msb_lsb;

	msb_lsb =((a>>7)&1)<<1 |((a>>0)&1);
	printf("%x", msb_lsb);

}



