import java.util.Scanner;

public class UserMenu {
    private ShoppingCart cart;
    private Scanner scanner;

    public UserMenu() {
        cart = new ShoppingCart();
        scanner = new Scanner(System.in);
    }

    public void start() {
        boolean exit = false;

        while (!exit) {
            System.out.println("\n--- Shopping Cart Menu ---");
            System.out.println("1. Add Grocery Product");
            System.out.println("2. Add Electronic Product");
            System.out.println("3. Add Clothing Product");
            System.out.println("4. Remove Product by ID");
            System.out.println("5. View Cart");
            System.out.println("6. Export Cart to File");
            System.out.println("7. Exit");
            System.out.print("Choose an option: ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // consume newline

            try {
                switch (choice) {
                    case 1:
                        System.out.print("Enter ID, Name, Price, Weight (kg): ");
                        Product g = new GroceryProduct(scanner.next(), scanner.next(), scanner.nextDouble(), scanner.nextDouble());
                        cart.addItem(g);
                        break;
                    case 2:
                        System.out.print("Enter ID, Name, Price, Warranty (months): ");
                        Product e = new ElectronicProduct(scanner.next(), scanner.next(), scanner.nextDouble(), scanner.nextInt());
                        cart.addItem(e);
                        break;
                    case 3:
                        System.out.print("Enter ID, Name, Price, Size: ");
                        Product c = new ClothingProduct(scanner.next(), scanner.next(), scanner.nextDouble(), scanner.next());
                        cart.addItem(c);
                        break;
                    case 4:
                        System.out.print("Enter Product ID to remove: ");
                        cart.removeItem(scanner.next());
                        break;
                    case 5:
                        cart.displayCart();
                        System.out.println("Total: Rs." + cart.calculateTotal());
                        break;
                    case 6:
                        ExportCartThread thread = new ExportCartThread(cart, "cart_summary.txt");
                        thread.start();
                        break;
                    case 7:
                        exit = true;
                        break;
                    default:
                        System.out.println("Invalid option. Try again.");
                }
            } catch (Exception ex) {
                System.err.println("Error: " + ex.getMessage());
            }
        }
        scanner.close();
        System.out.println("Exiting Shopping Cart System.");
    }
}
