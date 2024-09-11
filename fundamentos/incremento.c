#include <stdio.h>

int main(){
    int i = 0;

    i++;

    printf("\n\t%d\n", i); // 1

    printf("\t%d\n", i++); // 1

    printf("\t%d\n", i); // 2

    printf("\t%d\n", ++i); // 3
}