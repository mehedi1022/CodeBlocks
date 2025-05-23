package pack;

import java.util.ArrayList;

public class Application {
    public static void main(String[] args){
        SmartWatch smartWatch = new SmartWatch("Apple", false, 10, 50);

        smartWatch.powerOn();
        smartWatch.updateHeartRate(84);
        smartWatch.countSteps(216);
        smartWatch.displayInfo();
    }
}

