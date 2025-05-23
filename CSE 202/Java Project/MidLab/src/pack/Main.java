package pack;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner mainScanner = new Scanner(System.in);
        ScreeningScheduleAppFunctionality screeningScheduleAppFunctionality = new ScreeningScheduleAppFunctionality();

        int option;

        do{
            System.out.println("\nPress...");
            System.out.println("1 to Add screening detail");
            System.out.println("2 to reserve seats");
            System.out.println("3 to Mark as sold");
            System.out.println("4 to List all screenings");
            System.out.println("5 to list only sold outs");
            System.out.print("Enter your choice: ");
            option = mainScanner.nextInt();
            mainScanner.nextLine();

            if(option == 1){
                screeningScheduleAppFunctionality.addScreeningInfo();
            } else if (option == 2) {
                screeningScheduleAppFunctionality.availableSeats();
            } else if (option == 3) {
                screeningScheduleAppFunctionality.markAsSoldOut();
            } else if (option == 4) {
                screeningScheduleAppFunctionality.listAllScreens();
            } else if (option == 5) {
                screeningScheduleAppFunctionality.listSoldOuts();
            } else if (option == 0) {
                System.out.println("EXITING...");
                return;
            } else {
                System.out.println("INVALID OPTION");
            }

        } while(true);
    }
}
