#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char palavra[30];

	printf("Digite uma palavra: ");
	gets(palavra);

	int i = 0;
	int cont = strlen(palavra);
	cont--;
	int errado = 0;

	while(cont >= i){
		if(tolower(palavra[i]) != tolower(palavra[cont])){
			errado++;
		}
		i++;
		cont--;
	}

	if(errado == 0){
		printf("\nA palavra %s é palíndroma!\n", palavra);
	} else{
		printf("\nA palavra %s não é palíndroma!\n", palavra);
	}
	return 0;
}