#include <stdio.h>

int sec(int N){
    if(N==1){
        return N;
    }else{
        return N - sec(N-1);
    }
}

int main(){
    int N;
    do{
        printf("Ingrese un numero N como tope \n");
        scanf("%d", &N);
    } while(N<1);

    for(int i =1; i<=N;i++){
        int resultado = sec(i);
        printf("\n %d", resultado);
    }
}