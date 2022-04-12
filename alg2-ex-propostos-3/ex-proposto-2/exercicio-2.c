/*
Exercício 2. Escreva um programa que leia duas palavras do teclado e determine
se a segunda é um anagrama da primeira. Uma palavra é um anagrama de outra
se todas as letras de uma ocorrem na outra, em mesmo número, independente da
posição. Exemplos: ROMA, MORA, ORAM, AMOR, RAMO, são anagramas entre si.
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char palavra_um[40];
    char palavra_dois[40];

    printf("Digite a primeira palavra: ");
    fgets(palavra_um, 40, stdin);
    printf("\nDigite a segunda palavra: ");
    fgets(palavra_dois, 40, stdin);

    int quantidade_palavra_um = strlen(palavra_um);
    int quantidade_palavra_dois = strlen(palavra_dois);
    int quantidade_de_caracteres = quantidade_palavra_um == quantidade_palavra_dois;

    if(quantidade_de_caracteres)
    {
        int cont = 0;
        for(int i = 0; i < quantidade_palavra_um; i++)
        {
            for(int j = 0; j < quantidade_palavra_um; j++)
            {
                if(tolower(palavra_um[i]) == tolower(palavra_dois[j]))
                {
                    cont++;
                    break;
                }
            }
        }
        
        if(quantidade_palavra_um == cont)
        {
            printf("\nAs palavras sao anagramas\n");
        }
        else{
            printf("\nAs palavras não são anagramas!\n");
        }
    }
    else
    {
        printf("\nQuantidade de letras diferente, impossibilitando a palavra de ser um anagrama.\n");
    }
}