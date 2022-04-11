/*
Exercício 1. Faça um programa que leia um valor n e depois leia uma sequência
de n números inteiros e os armazene em um vetor. Posteriormente, seu programa
deve determinar o maior e o menor elemento do vetor.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int n[100000];
    char continuar;
    int cont = 0;
    int maior;
    int menor;

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &n[cont]);
        fflush(stdin);

        maior = menor = n[0];
        int i = 0;
        while(i < strlen(n))
        {
            if(n[cont] > maior)
            {
                maior = n[cont];
            }
            if(menor > n[cont]) 
            {
                menor = n[cont];
            }
            i++;
        }

        printf("Deseja adicionar mais numeros? (s/n)\n");
        scanf("%c", &continuar);
        fflush(stdin);
        printf("\n\n");

        cont++;

    } while (continuar != 'n' && continuar != 'N');

    printf("\nMaior valor: %d\nMenor valor: %d\n", maior, menor);
    
    return 0;
}