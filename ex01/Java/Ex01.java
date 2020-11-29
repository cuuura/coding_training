import java.util.*;

class Ex01 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("What is your name? ");
        String myName = scanner.next();

        scanner.close();

        // String format 
        System.out.println(String.format("Hello, %s, nice to meet you!", myName));
        // System.out.printf("Hello, %s, nice to meet you!", myName);
        // System.out.println("Hello, " + myName + ", nice to meet you!");
    }
}