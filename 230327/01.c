/*
 * main.c
 *
 *  Created on: 2023. 3. 27.
 *      Author: SSAFY
 */
#include <stdio.h>

int main(void)
{
	unsigned short a = 0XFD77;
	unsigned short b = 0X3F52;

	printf("0XFD77 & ((0X3f52 >> 3) << 0XA) = %X", a&((b>>3)<<0XA));

}



