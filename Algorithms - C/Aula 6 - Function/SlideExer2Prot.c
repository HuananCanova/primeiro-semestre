#include<stdio.h>
#include<math.h>

void calc(int k);

int main()
{

    int k;

    printf("Informe a quantia de numeros: ");
    scanf("%d", &k);

    calc(k);

    return 0;
}


void calc(int k)
{
    int resul;

    for(int i=1; i <= k; i++){
        resul = pow(i, 2);
        printf("%d\n", resul);
    }

}