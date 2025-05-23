import java.util.Scanner;

public class Application {
    public static void main(String[] args) {
        SmartWatch smartWatch = new SmartWatch("Apple", false, 0, 0);
        Scanner scanner = new Scanner(System.in);

        smartWatch.powerOn();
        try{
            System.out.print("Enter Heart Rate: ");
            int heartRate = scanner.nextInt();
            smartWatch.updateHeartRate(heartRate);
        }
        catch (InvalidHeartRateException e) {
            System.out.println("Caught Exception: "+e.getMessage());
        }

        try {
            System.out.print("Enter Steps Count: ");
            int stepsCount = scanner.nextInt();
            smartWatch.countSteps(stepsCount);
        }
        catch (InvalidStepCountException e) {
            System.out.println("Caught Exception: "+e.getMessage());
        }

        smartWatch.displayinfo();
    }
}