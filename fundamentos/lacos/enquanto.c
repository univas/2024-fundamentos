#include <stdio.h>

int main(){
    int i = 1; // início

    while(i <= 10 /* fim */){
        printf("Valor: %d\n", i);
        i = i + 1;
    }

    // Loop infinito
    while(i <= 10 /* fim */)
        printf("Valor: %d\n", i);
    i = i + 1;
    
}