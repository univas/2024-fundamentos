#include <stdio.h>

int main(){
    /*
    Escreva um programa em C que solicite ao usuário um número inteiro e imprima na tela todos os números primos entre 1 e o número digitado.

    Se o número digitado for menor que 1, imprima na tela "Nao possui numeros primos".

    Você deve criar duas versões, uma utilizando for e outra utilizando while.
    */


    // Numero primo, eh aquele que só é divisível por 1 e por ele mesmo

    int numero_digitado;

    printf("Digite um numero:");
    scanf("%d", &numero_digitado);

    if(numero_digitado < 1){
        printf("Nao possui primos.\n");
    }else{
        int indice = 1;
        while(indice <= numero_digitado){
            int numero_qualquer = 3;
            if(numero_qualquer == 1){
                printf("%d\n", numero_qualquer);
            }else{
                int i = 1;
                int contador = 0;
                while(i <= numero_qualquer){
                    if(numero_qualquer % i == 0){
                        contador++;
                    }
                    i++;
                }
                if(contador == 2){
                    printf("%d\n", numero_qualquer);
                }
            }
            indice++;
        }
        
    }

    
    
}