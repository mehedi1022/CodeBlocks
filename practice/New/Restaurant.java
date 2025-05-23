package New;

import java.util.ArrayList;
import java.util.List;

public class Restaurant {
    private String name;
    private List<MenuItem> menuItems;

    public Restaurant(String name) {
        this.name = name;
        this.menuItems = new ArrayList<>();
    }

    public void addItem(MenuItem item) {
        menuItems.add(item);
    }

    public List<MenuItem> getMenuItems() {
        return menuItems;
    }

    public String getName() {
        return name;
    }
}
