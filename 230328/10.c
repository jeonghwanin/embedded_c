/*
 * 10.c
 *
 *  Created on: 2023. 3. 28.
 *      Author: SSAFY
 */
#include <stdio.h>
#include <string.h>

char copy[7][7];
sort(int start, int end,const char *p[]){
	if(start < end){
		int mid = (start + end) >> 1;
		sort(start, mid)l;
		sort(mid + 1, end);
		merge(start, end, p);
	}
}

int cmp(char *a, char *b){
	if(strlen(a)< strlen(b)) return 1;
	if(strlen(a)> strlen(b)) return 0;
	for(int t=0; t<strlen(a); ++t){
		if(a[t]<b[t]) return 1;
		if(a[t]>b[t]) return 0;
	}
	return 0;
}

void merge(int start, int end, const char *p[]){
	int mid = (start + end)>>1;
	int i = start;
	int j = end;
	int k = 0;
	while(i<=mid && j<=end){
		if(cmp(p[i],p[j])) copy[k++]=p[i++];
		else copy[k++] = p[j++];
	}
	while(i<=mid)copy[k++]=p[i++];
	while(j<=end)copy[k++] = p[j++];
}

int main(void){
	const char* p[7] = {"BTS","BTS","BBQ","BTS","BBQ","ABCD","AS"};

}



