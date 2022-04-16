/*
Exercício 6. (Busca sequencial) Faça um programa que leia uma sequência de números positivos terminada com o número 0 e os armazene em um vetor.
Depois disso, seu programa deve solicitar um número ao usuário e pesquisar se o número digitado ocorre no vetor. Seu programa deve implementar o algoritmo de busca sequencial.
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    int num[100000];
    while(1){
        printf("Digite um número: ");
        scanf("%d", &num[i]);

        if(num[i] == 0){
            break;
        }

        if(num[i] < 0){
            continue;
        }
        i++;
    }

    int pesquisa;

    printf("\n\nDigite o número que deseja pesquisar: ");
    scanf("%d", &pesquisa);

    for(int k = 0; k < i; k++){
        if(pesquisa == num[k]){
            printf("\nO número está na posição %d\n", k+1);
        }
    }

    return 0;
}