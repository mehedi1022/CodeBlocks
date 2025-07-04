import java.util.Scanner;

public class OnePrime {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n, i, count = 0;
        n = s.nextInt();
        if (n <= 1) {
            System.out.println("NO");
        } else {
            for (i = 1; i <= n; i++) {
                if(n % i == 0){
                count++;
                }
            }
        }
        if(count > 2){
            System.out.println("NO");
        }else{
            System.out.println("YES");
        }
    }
}