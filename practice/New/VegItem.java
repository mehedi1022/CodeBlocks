package New;

public class VegItem extends MenuItem {
    public VegItem(String name, double price) {
        super(name, price);
    }

    @Override
    public String getType() {
        return "Veg";
    }
}
