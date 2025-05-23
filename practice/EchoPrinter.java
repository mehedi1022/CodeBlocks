import java.util.Scanner;

public class EchoPrinter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter anything (type 'exit' to quit):");

        while (true) {
            System.out.print("> ");
            String input = scanner.nextLine();

            if (input.equalsIgnoreCase("exit")) {
                System.out.println("Goodbye!");
                break;
            }

            System.out.println("You entered: " + input);
        }

        scanner.close();
    }
}
