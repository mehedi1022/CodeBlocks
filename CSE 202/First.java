import java.util.Scanner;

public class First {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter First Number: ");
        double n1 = s.nextDouble();

        System.out.println("Enter Second Number: ");
        double n2 = s.nextDouble();

        s.nextLine();
        System.out.println("What operation do you want to perform? ");
        String operation = s.nextLine();
        if (operation.equals("sum")) {
            System.out.printf("%f + %f = %f", n1, n2, n1 + n2);
        } else if (operation.equals("sub")) {
            System.out.printf("%f - %f = %f", n1, n2, n1 - n2);

        } else if (operation.equals("mul")) {
            System.out.printf("%f * %f = %f", n1, n2, n1 * n2);

        } else if (operation.equals("div")) {
            if (n2 == 0) {
                System.out.println("Can not divide by zero");
            }else{
                System.out.printf("%f / %f = %f", n1, n2, n1 / n2);
            }

        } else {
            System.out.printf("%s is not supported operation", operation);
        }

        s.close();
    }
}