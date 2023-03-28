/*
 * 11.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
#include <string.h>
int main(void){
	const char * p[3] = {
			"[000053.163123 MIN CO MIN CO MIN CO",
			"[004351.231231 EMBEDDED EM EM EM",
			"[123456.654321 HO HO HO KKK",
	};
	float sec[3];
	char buf[3][100];
	for(int t=0; t<3; ++t) sscanf(p[t],"[%.0f %[^\n]]", &sec[t], buf[t]);
	for(int t=0; t<3; ++t) sprintf(buf[t],"%f sec : %s", sec[t], buf[t]);
}



