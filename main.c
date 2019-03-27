#include "help.h"


int main(void) {

    //time
    TimeEstimation();

	scanf("%[^\n]", s);
	len = strlen(s);

	for(i = len, j = 0; i < len+siz; i++, j++) s[i] = arr[j];
	char en[len+siz];
	char de[len];
    printf("\n");

    //encryption
    enc(s, en);
    printf("Encryption:--->\t");
    for(i = 0; i < siz+len; i++) printf("%c", en[i]);
    printf("\n");

    //decryption
    dec(en, de);
    printf("Decryption:--->\t");
    for(i = 0; i < len; i++) printf("%c", de[i]);
    printf("\n");
}
