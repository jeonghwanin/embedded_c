/*
 * 02.c
 *
 *  Created on: 2023. 3. 27.
 *      Author: SSAFY
 */
#include <stdio.h>

int getBit(int a, int n){
	return (a >> n) & 1;
}

int main(void){

	int a = 8;
	printf("%d", getBit(a, 3));

}


