import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner lec = new Scanner(System.in);
        System.out.println("Inserte un numero entero");
        int entero = lec.nextInt();
        System.out.println("Inserte un numero decimal");
        double decimal = lec.nextDouble();
        System.out.println("Inserte una palabra unica");
        String palabra = lec.next();

        System.out.println("Su numero entero es " + entero);
        System.out.println("Su numero decimal es " + decimal);
        System.out.println("Su palabra es " + palabra);
    }
}
