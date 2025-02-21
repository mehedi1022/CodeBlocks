import java.util.Scanner;

public class MovieTicketPrice {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter your age: ");
        int age = scanner.nextInt();

        int ticketPrice;

       
        if (age < 5) {
            ticketPrice = 0;  // Free ticket
        } else if (age >= 5 && age <= 12) {
            ticketPrice = 100;
        } else if (age >= 13 && age <= 59) {
            ticketPrice = 250;
        } else { // age 60+
            ticketPrice = 150;
        }

        
        System.out.print("Do you want popcorn? (true/false): ");
        boolean wantsPopcorn = scanner.nextBoolean();

        
        if (wantsPopcorn) {
            System.out.println("Popcorn added! An extra 100 Tk has been added.");
            ticketPrice += 100;
        }

        
        System.out.println("Your total bill is: " + ticketPrice + " Tk");

        scanner.close(); 
    }
}

