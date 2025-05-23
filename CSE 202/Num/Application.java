import java.util.Scanner;

public class Application {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        SmartWatch sw = new SmartWatch("Apple", false, 0, 0);

        sw.powerOn();
        try {
            System.out.println("Enter Heart Rate: ");
            int heartRate = s.nextInt();
            sw.updateHeartRate(heartRate);
        } catch (InvalidHeartRateException e) {
            System.out.println("Caught Exception: " + e.getMessage());
        }

        try{
            System.out.println("Enter Step Counts: ");
            int stepsCount = s.nextInt();
            sw.countSteps(stepsCount);
        }
        catch(InvalidStepCountException e){
            System.out.println("Caught Exception " + e.getMessage());
        }

        sw.displayInfo();
        sw.powerOff();
    }
}