import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
//Mini Project
        Scanner s = new Scanner(System.in);
        int myNum =(int) (Math.random() * 100);
        int userNumber = 0;

        do{
            System.out.println("Guess my number (1-100): ");
            userNumber = s.nextInt();
            if(userNumber == myNum){
                System.out.println("WOHOO .. CORRECT NUMBER");
                break;
            }else if(userNumber > myNum){
                System.out.println("your number is to large");
            }else {
                System.out.println("your number is too small");
            }
        }while(userNumber >= 0);
    }

}