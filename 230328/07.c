/*
 * 07.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char a[100], b[100];
	scanf(" %s", a);
	scanf(" %s", b);
	int A = strtol(a, NULL, 16);
	int B = strtol(b, NULL, 2);
	printf("%X\n", ~(A&B)<<4);
	printf("%X\n", (A^0xCD)&(B>>3));
}


