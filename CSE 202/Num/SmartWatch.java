public class SmartWatch implements Device, Displayable {
    String brand;
    boolean isPowerOn;
    int heartRate;
    int stepsCount;

    public SmartWatch(String brand, boolean isPowerOn, int heartRate, int stepsCount) {
        this.brand = brand;
        this.isPowerOn = false;
        this.heartRate = 0;
        this.stepsCount = 0;
    }

    public void updateHeartRate(int newHeartRate) throws InvalidHeartRateException {
        if (newHeartRate < 0 || newHeartRate < 220) {
            throw new InvalidHeartRateException("Faulty Heart Rate");
        } else {
            heartRate = newHeartRate;
        }
    }

    public void countSteps(int steps) throws InvalidStepCountException {
        if (steps < 0) {
            throw new InvalidStepCountException("Invalid Step Count");
        } else {
            stepsCount += steps;
        }
    }

    @Override
    public void powerOn() {
        if (isPowerOn = true) {
            System.out.println("Device is already On");
        } else {
            isPowerOn = true;
            System.out.println("Device is now On");
        }
    }

    @Override
    public void powerOff() {
        if (isPowerOn = false) {
            System.out.println("Device is already Off");
        } else {
            System.out.println("Device is now Off");
        }
    }

    @Override
    public void displayInfo() {
        System.out.println("Brand: " + brand);
        System.out.println("Power Status: " + isPowerOn);
        System.out.println("Heart Rate: " + heartRate);
        System.out.println("Steps Count: " + stepsCount);
    }

}
