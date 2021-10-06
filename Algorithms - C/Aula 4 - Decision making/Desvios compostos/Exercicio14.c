#include<stdio.h>

int main(){

   float a,b,c;

    printf("Inform a: ");
    scanf("%f", &a);

    printf("Inform b: ");
    scanf("%f", &b);

    printf("Inform c: ");
    scanf("%f", &c);

    if(((a > b && a > c) && (b + c <= a)) || ((b > a && b > c) && (a + c <= b)) || ((c > b && c > a) && (a + b <= c))){
       printf("Nao e trinagulo");
    } else if(a == b && b == c){
         printf("Equilatero");
    } else if((a == b || b == c || a == c)){
        printf("Isosceles");
    } else {
        printf("Escaleno");
    }
    return 0;
}