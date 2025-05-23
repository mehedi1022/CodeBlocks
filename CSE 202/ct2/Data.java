import java.util.Scanner;

public class Data {

    public static void main(String[] args) {

        String s = "";
        for (int i = 0; i < 100; i++) {
            s = s + i; // Creates 100 new string objects
        }
        System.out.println("Concatenated String: " + s);

    }
}