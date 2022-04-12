/*
Exercício 1. Faça um programa que leia um valor n e depois leia uma sequência
de n números inteiros e os armazene em um vetor. Posteriormente, seu programa
deve determinar o maior e o menor elemento do vetor.
*/

#include <stdio.h>

int main()
{
    int n[100000];
    char continuar;
    int cont = 0;
    
    do
    {
        printf("Digite um número: ");
        scanf(" %d", &n[cont]);

        printf("Deseja adicionar mais números? (s/n)\n");
        scanf(" %c", &continuar);
        printf("\n\n");

        cont++;

    } while (continuar != 'n' && continuar != 'N');

    int maior;
    int menor;

    maior = menor = n[0];

    for(int i = 1; i < cont; i++)
    {
        if(n[i] > maior)
        {
            maior = n[i];
        }
        if(menor > n[i]) 
        {
            menor = n[i];
        }
    }

    printf("\nMaior valor: %d\nMenor valor: %d\n", maior, menor);
    
    return 0;
}