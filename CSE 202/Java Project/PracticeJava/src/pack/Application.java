package pack;

import java.util.ArrayList;
public class Application {
public static void main(String[] args){
    SmartWatch smartWatch = new SmartWatch("Apple", false, 10, 50);
    smartWatch.powerOn();
    smartWatch.updateHeartRate(50);
    smartWatch.countSteps(502);
    smartWatch.displayInfo();
}
}