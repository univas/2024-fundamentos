#include <stdio.h>

int main(){
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
}