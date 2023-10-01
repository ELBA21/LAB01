#include <stdio.h>
int factorial(int b){ //calcula el facotorial de un numero "b"
    if(b==1||b==2){
        return b;
    }else{
        return b * factorial(b-1);
    }
}
int main(){
    int b;
    do {
        printf("Ingrese un numero base \n");
        scanf("%d", &b);
        if(b<1){
            printf("Ingrese numero valido \n");
        }
    } while (b<1);
    printf("\n Su factorial es: %d \n",factorial(b));
    return 0;
}