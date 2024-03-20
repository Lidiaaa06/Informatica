 // esercizio d
import java.io.*;
import java.util.Scanner;

public class stringhe_C 
{
    public static void main() 
    { 
        Scanner scanner = new Scanner(System.in);
        System.out.println("Inserisci una frase: ");

        String stringa = scanner.nextLine();
        String stringa2 = stringa;

        String[] parole = stringa2.split(" ");

        // Kebab-case
        stringa2 = String.join("-", parole);
        System.out.println("Kebab-Case: " + stringa2);

        stringa2 = stringa;

        // Snake_Case
        stringa2 = String.join("_", parole);
        System.out.println("Snake_Case: " + stringa2);

        stringa2 = stringa;

        //camelCase
        for (int i = 1; i < parole.length; i++) {
            parole[i] = parole[i].substring(0, 1).toUpperCase() + parole[i].substring(1);
        }

        stringa2 = String.join("", parole);
        System.out.println("camelCase: " + stringa2);

        stringa2 = stringa;

        //PascalCase

        for (int i = 0; i < parole.length; i++) {
            parole[i] = parole[i].substring(0, 1).toUpperCase() + parole[i].substring(1);
        }

        stringa2 = String.join("", parole);
        System.out.println("PascalCase: " + stringa2);

    }
}