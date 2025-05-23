package pack;

public class Device {

    String brand;
    boolean isPoweredOn;

    Device(String brand, boolean isPoweredOn){
        this.brand = brand;
        this.isPoweredOn = false;
    }

    public void powerOn(){
        if(isPoweredOn){
            System.out.println("Device is already On");
        }else{
            isPoweredOn = true;
            System.out.println("Device is now On");
        }
    }
    public void powerOff(){
        if(!isPoweredOn){
            System.out.println("Device is already Off");
        }else{
            isPoweredOn = false;
            System.out.println("Device is now On");
        }
    }
    public void displayInfo(){
        System.out.println("Brand: " + brand);
        System.out.println("Power Status: "+ isPoweredOn);
    }
}