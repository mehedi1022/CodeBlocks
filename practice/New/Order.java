package New;

import java.util.List;

public class Order {
    private Customer customer;
    private DeliveryAgent agent;
    private List<MenuItem> items;

    public Order(Customer customer, DeliveryAgent agent, List<MenuItem> items) {
        this.customer = customer;
        this.agent = agent;
        this.items = items;
    }

    public void printSummary() {
        System.out.println("\n===== Order Summary =====");
        System.out.println("Customer: " + customer.getName());
        System.out.println("Delivery Agent: " + agent.getName());
        double total = 0;
        for (MenuItem item : items) {
            System.out.println("- " + item.getName() + ": $" + item.getPrice());
            total += item.getPrice();
        }
        System.out.printf("Total Amount: $%.2f\n", total);
    }
}
