import java.util.Scanner;

public class EvenNumberCounter {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();

        int[] numbers = new int[n];  
        int evenCount = 0;  

        
        System.out.println("Enter " + n + " numbers:");
        for (int i = 0; i < n; i++) {
            numbers[i] = scanner.nextInt();  
            if (numbers[i] % 2 == 0) {  
                evenCount++;  
            }
        }

        
        System.out.println("Even count: " + evenCount);

        scanner.close(); 
    }
}
