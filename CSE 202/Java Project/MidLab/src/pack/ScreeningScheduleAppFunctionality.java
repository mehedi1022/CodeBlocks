package pack;

import java.util.Objects;
import java.util.Scanner;

public class ScreeningScheduleAppFunctionality {
    Scanner scanner = new Scanner(System.in);
    ScreeningDetails[] screeningDetails = new ScreeningDetails[100];
    int screeningDetailsCount = 0;

    public void addScreeningInfo(){
        System.out.print("Enter Screening ID: ");
        int screeningID = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Enter Film Title: ");
        String filmTitle = scanner.nextLine();
        System.out.print("Enter Director name: ");
        String director = scanner.nextLine();
        System.out.print("Enter Genre: ");
        String genre = scanner.nextLine();
        System.out.print("Enter Screening time: ");
        int screeningTime = scanner.nextInt();
        System.out.print("Enter Available seats: ");
        int availableSeats = scanner.nextInt();
        String status = "Available";

        screeningDetails[screeningDetailsCount] = new ScreeningDetails(screeningID, filmTitle, director, genre, screeningTime, availableSeats, status);
        screeningDetailsCount++;
    }

    public void availableSeats(){
        System.out.print("Enter Screening ID: ");
        int screeningId = scanner.nextInt();

        for (int i = 0; i < screeningDetailsCount; i++) {
            if(screeningId == screeningDetails[i].screeningId){
                System.out.println("Available seats: "+screeningDetails[i].availableSeats);
                System.out.print("Enter seat numbers to reserve: ");
                int reservedSeat = scanner.nextInt();
                if(reservedSeat>=1 && reservedSeat<=100){
                    screeningDetails[i].availableSeats = screeningDetails[i].availableSeats - reservedSeat;
                    System.out.println(reservedSeat+" seats have been reserved for you");
                    System.out.println("Available seats: "+screeningDetails[i].availableSeats);
                    System.out.println("Thank you for your purchase!");
                    return;
                }
                else{
                    System.out.println("Sorry, there are not enough seats");
                    return;
                }
            }
        }
        System.out.println("No Such ID Found!");
    }

    public void markAsSoldOut(){
        for (int i = 0; i < screeningDetailsCount; i++) {
            if(screeningDetails[i].availableSeats == 0){
                screeningDetails[i].status = "Sold Out";
            }
        }
    }

    public void listAllScreens(){
        for (int i = 0; i < screeningDetailsCount; i++) {
            screeningDetails[i].details();
        }
    }

    public void listSoldOuts(){
        for (int i = 0; i < screeningDetailsCount; i++) {
            if(Objects.equals(screeningDetails[i].status, "Sold Out")){
                screeningDetails[i].details();
                return;
            }
        }
    }
}

