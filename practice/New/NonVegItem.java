package New;

public class NonVegItem extends MenuItem {
    public NonVegItem(String name, double price) {
        super(name, price);
    }

    @Override
    public String getType() {
        return "NonVeg";
    }
}
