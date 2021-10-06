// 13. Calcular o volume de uma lata de óleo utilizando a fórmula: volume = 3.14159 x r² x Altura

#include<stdio.h>
#include<math.h>

#define pi 3.14159

int main()
{
    float volume, alt, r;

    printf("Informe a altura: ");
    scanf("%f", &alt);

    printf("Informe o raio: ");
    scanf("%f", &r);

    volume = (pi * pow(r, 2) * alt);

    printf("Volume igual a: %.2f", volume);

    return 0;
}
