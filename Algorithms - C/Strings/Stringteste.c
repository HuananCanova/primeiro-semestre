#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(){
    char s1[30], s2[30], s3[60];
    int i=0, tamanho=0, indexS1 = 0, indexS2 = 0;

    printf("String 1: ");
    scanf(" %s", s1);

    printf("String 2: ");
    scanf(" %s", s2);

    tamanho = strlen(s1) + strlen(s2);

    for(i; i < tamanho; i++){
    if ((i < strlen(s1)) && (i < strlen(s2))) {
        if((i % 2) == 0){
            s3[i] = s1[indexS1];
            indexS1++;
        }else{
            s3[i] = s2[indexS2];
            indexS2++;
        }
    } else if (i < strlen(s1)) {
        s3[i] = s1[indexS1];
        indexS1++;
    } else if (i < strlen(s2)) {
        s3[i] = s2[indexS2];
        indexS2++;
    }
}

    printf(" %s", s3);
}