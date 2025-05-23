import java.util.Scanner;
public class Application {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read min and max for each thread from user
        System.out.println("Enter min and max for Thread 1:");
        int min1 = scanner.nextInt();
        int max1 = scanner.nextInt();

        System.out.println("Enter min and max for Thread 2:");
        int min2 = scanner.nextInt();
        int max2 = scanner.nextInt();

        System.out.println("Enter min and max for Thread 3:");
        int min3 = scanner.nextInt();
        int max3 = scanner.nextInt();

        // Create and start threads
        Thread t1 = new EvenNumberPrinter(min1, max1);
        Thread t2 = new EvenNumberPrinter(min2, max2);
        Thread t3 = new EvenNumberPrinter(min3, max3);

        t1.start();
        t2.start();
        t3.start();
    }
}