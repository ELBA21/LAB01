#include <stdio.h>
#include <string.h>
typedef struct {
    char nombre[50];
    int edad;

} persona;

int main(){
    int pcant;
    printf("Cuantas personas hay? \n");
    scanf("%d", &pcant);
    persona p[pcant];

    for(int i = 1; i<=pcant; i++){
        printf("Inserte datos de la persona N°%d \n", i);
        printf("Ingrese nombre:  \n");
        scanf("%s", p[i].nombre);
        printf("Ingrese la edad: \n");
        scanf("%d", &p[i].edad);
    }
    for(int i = 1; i <=pcant ; i++){
        printf("======%d===== \n", i);
        printf("Nombre: %s \n", p[i].nombre);
        printf("Edad: %d \n", p[i].edad);
    }
    
}