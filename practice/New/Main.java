package New;
// Main.java
import java.util.*;

public class Main {
    static Scanner scanner = new Scanner(System.in);
    static List<Customer> customers = new ArrayList<>();
    static List<DeliveryAgent> agents = new ArrayList<>();
    static Restaurant restaurant = new Restaurant("Spice House");

    public static void main(String[] args) {
        boolean running = true;

        while (running) {
            System.out.println("\n===== Online Food Delivery System =====");
            System.out.println("1. Add Customer");
            System.out.println("2. Add Menu Item");
            System.out.println("3. Display Menu");
            System.out.println("4. Place Order");
            System.out.println("5. Make Payment");
            System.out.println("6. View All Customers");
            System.out.println("7. Add Delivery Man");
            System.out.println("8. View All Delivery Men");
            System.out.println("0. Exit");
            System.out.print("Choose an option: ");

            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    addCustomer();
                    break;
                case 2:
                    addMenuItem();
                    break;
                case 3:
                    displayMenu();
                    break;
                case 4:
                    placeOrder();
                    break;
                case 5:
                    makePayment();
                    break;
                case 6:
                    viewCustomers();
                    break;
                case 7:
                    addDeliveryMan();
                    break;
                case 8:
                    viewDeliveryMen();
                    break;
                case 0:
                    running = false;
                    break;
                default:
                    System.out.println("Invalid option. Try again.");
            }
        }
    }

    static void addCustomer() {
        System.out.print("Enter name: ");
        String name = scanner.nextLine();
        System.out.print("Enter email: ");
        String email = scanner.nextLine();
        customers.add(new Customer(name, email));
        System.out.println("Customer added.");
    }

    static void addMenuItem() {
        System.out.print("Enter item name: ");
        String name = scanner.nextLine();
        System.out.print("Enter price: ");
        double price = scanner.nextDouble();
        scanner.nextLine();
        System.out.print("Enter type (Veg/NonVeg): ");
        String type = scanner.nextLine();

        if (type.equalsIgnoreCase("Veg"))
            restaurant.addItem(new VegItem(name, price));
        else
            restaurant.addItem(new NonVegItem(name, price));

        System.out.println("Item added to menu.");
    }

    static void displayMenu() {
        System.out.println("\nMenu for " + restaurant.getName() + ":");
        for (MenuItem item : restaurant.getMenuItems()) {
            System.out.println("- " + item.getName() + " (" + item.getType() + "): $" + item.getPrice());
        }
    }

    static void placeOrder() {
        if (customers.isEmpty() || agents.isEmpty()) {
            System.out.println("Add customers and delivery agents first.");
            return;
        }

        System.out.println("Choose Customer:");
        for (int i = 0; i < customers.size(); i++) {
            System.out.println(i + ". " + customers.get(i).getName());
        }
        int custIndex = scanner.nextInt();

        System.out.println("Choose Delivery Agent:");
        for (int i = 0; i < agents.size(); i++) {
            System.out.println(i + ". " + agents.get(i).getName());
        }
        int agentIndex = scanner.nextInt();

        List<MenuItem> orderItems = new ArrayList<>();
        System.out.println("Select items (enter -1 to finish):");
        for (int i = 0; i < restaurant.getMenuItems().size(); i++) {
            System.out.println(i + ". " + restaurant.getMenuItems().get(i).getName());
        }
        while (true) {
            int itemIndex = scanner.nextInt();
            if (itemIndex == -1) break;
            if (itemIndex >= 0 && itemIndex < restaurant.getMenuItems().size()) {
                orderItems.add(restaurant.getMenuItems().get(itemIndex));
            }
        }

        Order order = new Order(customers.get(custIndex), agents.get(agentIndex), orderItems);
        order.printSummary();
    }

    static void makePayment() {
        System.out.print("Enter amount to pay: ");
        double amount = scanner.nextDouble();
        scanner.nextLine();

        System.out.print("Enter payment method (cash/card): ");
        String method = scanner.nextLine();
        PaymentProcessor processor = method.equalsIgnoreCase("card") ? new CreditCardPayment() : new CashPayment();
        processor.pay(amount);
    }

    static void viewCustomers() {
        for (Customer c : customers) {
            System.out.println("- " + c.getName() + " | " + c.getEmail());
        }
    }

    static void addDeliveryMan() {
        System.out.print("Enter name: ");
        String name = scanner.nextLine();
        System.out.print("Enter email: ");
        String email = scanner.nextLine();
        System.out.print("Enter agent ID: ");
        String id = scanner.nextLine();

        agents.add(new DeliveryAgent(name, email, id));
        System.out.println("Delivery agent added.");
    }

    static void viewDeliveryMen() {
        for (DeliveryAgent d : agents) {
            System.out.println("- " + d.getName() + " | ID: " + d.getId());
        }
    }
}
