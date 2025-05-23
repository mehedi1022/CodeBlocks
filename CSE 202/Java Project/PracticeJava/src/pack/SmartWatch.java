package pack;
public class SmartWatch extends Device {
int heartRate;
int stepsCount;

SmartWatch(String brand, boolean isPoweredOn, int heartRate, int stepsCount){
    super(brand, isPoweredOn);
    this.heartRate = 0;
    this.stepsCount = 0;
    
}
public void updateHeartRate(int newHeartRate){
    heartRate = newHeartRate;
}
public void countSteps(int steps){
    stepsCount = stepsCount + steps;
}
@Override
public void displayInfo(){
    System.out.println("Brand: "+ brand);
    System.out.println("Power Status: "+ isPoweredOn);
    System.out.println("Heart Rate: "+ heartRate);
    System.out.println("Steps Count: "+ stepsCount);
}

}