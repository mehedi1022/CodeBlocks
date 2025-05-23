import java.util.Scanner;

public class Application {
    public static void main(String[] args) {
        SmartWatchStore smartWatchStore = new SmartWatchStore();
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter brand: ");
        String brand = scanner.nextLine();
        System.out.print("Enter ID: ");
        int id = scanner.nextInt();

        SmartWatch smartWatch = new SmartWatch(id, brand, false, 0, 0, 10);

        smartWatch.powerOn();
        try{
            System.out.print("Enter Heart rate: ");
            int heartRate = scanner.nextInt();
            System.out.print("Enter Steps Count: ");
            int stepsCount = scanner.nextInt();

            smartWatch.updateHeartRate(heartRate);
            smartWatch.countSteps(stepsCount);

        }
        catch (InvalidHeartRateException e){
            System.err.println("Invalid heart rate");
        }
        catch (InvalidStepCountException e){
            System.err.println("Invalid Steps Count");
        }

        System.out.print("Enter Charge amount: ");
        int amount = scanner.nextInt();

        smartWatch.chargeBattery(amount);

        smartWatch.displayinfo();


        System.out.print("Enter new ID: ");
        int newId = scanner.nextInt();
        System.out.print("Enter new Brand: ");
        scanner.nextLine();
        String newBrand = scanner.nextLine();
        smartWatchStore.addWatch(new SmartWatch(newId, newBrand, false, 0,0,0));
    }
}