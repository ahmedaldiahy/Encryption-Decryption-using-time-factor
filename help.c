#include "help.h"

int i, j, len, siz = 6;
char s[100], t[100];
int arr[6];

void TimeEstimation(void){
    time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	arr[0] = tm.tm_sec;
	arr[1] = tm.tm_min;
	arr[2] = tm.tm_hour;
	arr[3] = tm.tm_mday;
	arr[4] = tm.tm_mon+1;
	arr[5] = (tm.tm_year+1900)%MAX;
}
void enc(char s[], char en[]){
	for(i = 0; i < len+siz; i++){
		en[i] = (s[i] + arr[i%6]) % MAX;
		if(en[i] < MIN) en[i]+=MIN, t[i] = -1;
	}

}
void dec(char en[], char de[]){
    for(i = 0; i < len; i++){
        if(t[i] == -1) en[i]-=MIN;
        de[i] = en[i] - arr[i%6];
        if(de[i] < 0) de[i] += (MAX);
    }
}
