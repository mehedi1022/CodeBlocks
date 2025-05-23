public class SmartWatch implements Device, Displayable{
    String brand;
    boolean isPoweredOn;
    int heartRate;
    int stepsCount;
    int id;
    int batteryLevel;

    SmartWatch(int id, String brand, boolean isPoweredOn, int heartRate, int stepsCount, int batteryLevel) {
        this.heartRate = 0;
        this.stepsCount = 0;
        this.isPoweredOn = false;
        this.brand = brand;
        this.batteryLevel = 100;
        this.id = id;
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
    public void chargeBattery(int amount){
        if(amount>=1 && amount<=100){
            batteryLevel = batteryLevel + amount;
            if(batteryLevel>=0 && batteryLevel<=100){
                System.out.println("Battery charged. Current battery: "+batteryLevel+"%");
            }
            else{
                System.out.println("Battery charged. Current battery: 100%");
            }
        }
        else{
            System.out.println("Invalid amount");
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
        System.out.println("Product ID: "+id);
        System.out.println("Battery Level: "+batteryLevel);
    }
}
