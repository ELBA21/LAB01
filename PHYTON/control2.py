## Para compilar codigo en JAVA
## Se debe selecionar la carpeta donde se encuentre el archivo
## se ejecuta el siguiente comando para primero, compilar el codigo
## javac NombreDelArchivo.java
## y posteriormente se ejecuta con
## java NombreDelArchivo

if __name__ == "__main__":
    print("====Prueba Indice Cintura/Altura (ICA)====")
    print("Ingrese su altura en centimetros")
    alt = int(input())
    print("Ingrese la circunferencia de su cintura")
    circ = int(input())
    ica = circ / alt

    print("Su ICA es: " + str(ica))
    if ica<0.536:
        print("Su ICA es NORMAL")
    if ica>= 0.536 and ica <= 0.583:
        print("Su ICA es ROBUSTA")
    if ica> 0.583:
        print("Usted esta en RIESGO FATAL")

    