#include <stdio.h>

int main()
{
    int x, y, z;
    do
    {
        printf("Digite 3 números: ");
        scanf("%i%i%i", &x, &y, &z);

        if (x + y > z && x + z > y && y + z > x)
        {
            if (x == y && y == z)
            {
                printf("Triângulo equilátero!");
            }
            else if (x != y && y != z)
            {
                printf("Triângulo escaleno!");
            }
            else
            {
                printf("Triângulo isoceles!");
            }
        }
        else
        {
            printf("Valores não formam um triângulo! Tente novamente...\n");
        }
    } while (x + y < z || x + z < y || y + z < x);

    printf("\nPrograma finalizado com succeso!");
}