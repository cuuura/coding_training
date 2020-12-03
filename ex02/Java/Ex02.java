import java.io.InputStream;
import java.util.Scanner;

class Ex02 {
    public static void main(String[] args) {
        String inputStr = "";

        Scanner scanner = new Scanner(System.in);

        System.out.print("What is the input String? ");

        inputStr = scanner.next();
        scanner.close();

        System.out.printf("%s has %d chracters.", inputStr, new Ex02().strlen(inputStr));
    }

    public int strlen (String str) {
        int returnValue =  0;
        
        returnValue = str.toCharArray().length;

        return returnValue;
    }
}