public class SmartWatch implements Device, Displayable{
    String brand;
    boolean isPoweredOn;
    int heartRate;
    int stepsCount;

    SmartWatch(String brand, boolean isPoweredOn, int heartRate, int stepsCount) {
        this.heartRate = 0;
        this.stepsCount = 0;
        this.isPoweredOn = false;
        this.brand = brand;
    }

    public void updateHeartRate(int newHeartRate) throws InvalidHeartRateException{
        if(newHeartRate <0 || newHeartRate>220){
            throw new InvalidHeartRateException("Faulty Heart Rate...ARE THEY STILL A HUMAN!?");
        }
        else{
            heartRate = newHeartRate;
        }
    }

    public void countSteps(int steps) throws InvalidStepCountException{
        if(steps < 0){
            throw new InvalidStepCountException("Negative steps count");
        }
        else{
            stepsCount = stepsCount + steps;
        }
    }


    @Override
    public void powerOn() {
        if(isPoweredOn){
            System.out.println("Device is already ON");
        }
        else{
            isPoweredOn = true;
            System.out.println("Device is now ON");
        }
    }

    @Override
    public void powerOff() {
        if(!isPoweredOn){
            System.out.println("Device is already OFF");
        }
        else{
            isPoweredOn = false;
            System.out.println("Device is now OFF");
        }
    }

    @Override
    public void displayinfo() {
        System.out.println("Brand: "+brand);
        System.out.println("Power status: "+isPoweredOn);
        System.out.println("Heart rate: "+heartRate);
        System.out.println("Steps count: "+stepsCount);
    }
}