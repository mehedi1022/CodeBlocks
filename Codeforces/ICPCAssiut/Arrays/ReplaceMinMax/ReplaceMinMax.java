import java.util.Scanner;
public class ReplaceMinMax{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, i, maxPos, minPos;
        long max, min, t;
        n = sc.nextInt();
        long[] arr = new long[n];
        for(i = 0; i < n; i++){
        arr[i] = sc.nextLong();
        }
        max = arr[0];
        maxPos = 0;
        min = arr[0];
        minPos = 0;
        for(i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
                maxPos = i;
            }
            if(arr[i] < min){
                min = arr[i];
                minPos = i;
            }
        }
        t = arr[maxPos];
        arr[maxPos] = arr[minPos];
        arr[minPos] = t;
        for(i = 0; i < n; i++){
            System.out.print(arr[i] + " ");
        }
        sc.close();
    }
}