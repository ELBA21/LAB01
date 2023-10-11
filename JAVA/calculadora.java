import java.util.Scanner;

public class calculadora{
    public static void main(String[] args){
        Scanner lec = new Scanner(System.in);
        System.out.println("Ingrese un numero A");
        int A = lec.nextInt();
        System.out.println("Ingrese un numero B");
        int B = lec.nextInt();
        int C = A + B;
        System.out.println("La suma de "+ A +" + " + B + " es " + C);

        Scanner.close();
    }
}