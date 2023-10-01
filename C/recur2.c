/* Ojetivo:
Suma de números naturales: 
Escribe una función recursiva para 
calcular la suma de los primeros "n" 
números naturales.*/
#include <stdio.h>
int sum(int n){
    if(n==1){
        return n;
    }else{
        return n + sum(n-1);
    }
}
int main (){
    int n;
    do{
        printf(" \nIngrese hasta que numero natural sumar (a partir del 1)\n");
        scanf("%d",&n);
        if(n<1){
            printf("\nNUMERO INVALIDO");
        }
    }while (n<1);
    printf(" \nLa sumatoria es: %d", sum(n));

}