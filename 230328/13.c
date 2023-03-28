/*
 * 13.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>

int main(void){
	File *fp = fopen("log.txt", "r");

	char buf[1000];
	//한줄 읽기
	fgets(buf, 1000, fp);
	//한죽 출력하기
	printf("%s", buf);

	fclose(fp);
}



