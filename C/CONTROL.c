//git clone [URL]
//git pull


#include <stdio.h>
typedef struct{
    char nombreM[50];
    char fechaI[50];
    char est[50];
} Clase;

typedef struct{
    char nombreE[50];
    int dia;
    int mes;
    int año;
    char carrera;
    int añoIngreso;
} Estudiante;

int main(){
    Clase c;
    Estudiante  est;
    printf("Ingrese el nombre del estudiante (SIn espacios, usar solo guines)\n");
    scanf("%s", &est.nombreE);
    printf("Ingreso de fecha de nacimiento\n");
    do{
        printf("Ingredia dia de nacimiento \n");
        scanf("%d", &est.dia);
    } while(est.dia<=1 && est.dia >=31);
    printf("\nMeses: \n1) Enero \n2) Febrero \n3) Marzo \n4) Abril \n5) Mayo \n6) Junio \n7) Julio \n8) Agosto \n9) Septiembre \n10) Octubre \n11) Noviembre \n12) Diciembre ");
    do{
        printf("Ingrese  mes de nacimiento \n");
        scanf("%d", &est.mes);
    } while(est.mes<=1 && est.mes>=12);
    printf("Ingrese año de nacimiento \n");
    scanf("%d", &est.año);

    printf("Ingrese la carrera (Sin espacios, usar solo guiones)");
    scanf("%s", est.carrera);

    printf("Ingrese el año de ingreso a la universidad");
    scanf("%s", &est.añoIngreso);
    printf("\n====DATOS DEL ESTUDIANTE====");
    printf("\nNombre del estudiante %s",est.nombreE );
    printf("\nNacimiento: %d/%d/%d", est.dia, est.mes, est.año);
    printf("\n Carrera: %s", est.carrera);
    printf("\n Año de ingreso: %d", est.añoIngreso);

}