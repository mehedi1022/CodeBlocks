public class ElectronicProduct extends Product {
    private int warrantyMonths;

    public ElectronicProduct(String id, String name, double price, int warrantyMonths) {
        super(id, name, price);
        this.warrantyMonths = warrantyMonths;
    }

    @Override
    public String getDetails() {
        return "[Electronic] " + id + ", " + name + ", Rs." + price + ", Warranty: " + warrantyMonths + " months";
    }
}
