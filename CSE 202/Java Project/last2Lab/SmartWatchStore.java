import java.util.ArrayList;
import java.util.Objects;

public class SmartWatchStore{
    ArrayList<SmartWatch> inventory;

    SmartWatchStore(){
        inventory = new ArrayList<>();
    }

    public void addWatch(SmartWatch watch){
        inventory.add(watch);
    }

    public void removeWatchById(int id){
        for (int i = 0; i < inventory.size(); i++) {
            SmartWatch watch = inventory.get(i);
            if(watch.id == id){
                inventory.remove(watch);
                return;
            }
        }
    }

    public void showAllWatches(){
        for (int i = 0; i < inventory.size(); i++) {
            SmartWatch watch = inventory.get(i);
            watch.displayinfo();
        }
    }

    public SmartWatch searchByBrand(String brand){
        for (int i = 0; i < inventory.size(); i++) {
            if(Objects.equals(inventory.get(i).brand, brand)){
                return inventory.get(i);
            }
        }
        return null;
    }

    public void showPoweredOnDevices(){
        for (int i = 0; i < inventory.size(); i++) {
            SmartWatch watch = inventory.get(i);
            if(watch.isPoweredOn == true){
                watch.displayinfo();
            }
        }
    }

    public void sortBySteps() {
        inventory.sort((a, b) -> b.stepsCount - a.stepsCount); // descending
        System.out.println("Watches sorted by steps (descending):");
        showAllWatches();
    }
    
}