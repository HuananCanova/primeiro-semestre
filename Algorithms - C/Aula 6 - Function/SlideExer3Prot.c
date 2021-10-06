#include<stdio.h>

float calc(float not1, float not2, float not3, float not4);


int main()
{
    float h, x, y, z, media;

    printf("Informe as notas: ");
    scanf("%f %f %f %f",&h, &x, &y, &z);

    media = calc(h, x, y,z);
    printf("Media final do aluno: %.2f", media);
    return 0;
}

float calc(float not1, float not2, float not3, float not4)
{
    return (not1+not2+not3+not4)/4;
}