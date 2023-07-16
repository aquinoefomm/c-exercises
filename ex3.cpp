#include <iostream>
#include <stdio.h>

int main(){

    float num;
    float numeros[]={};
    // printf("Digite 1 número: ");
    // scanf("%f%f%f", &x, &y, &z);

    for(int i = 0; i<3; i++){
        printf("Digite 1 número: ");
        scanf("%f", &num);
        numeros[i] = num;
    }
    std::sort(numeros);

    float menor = numeros[0];
    float inter = numeros[1];
    float maior = numeros[2];
    

    printf("\nO maior valor é: %d", maior);
    printf("\nO menor valor é: %d", menor);
    printf("\nO valor intermediário é: %d", inter);

}