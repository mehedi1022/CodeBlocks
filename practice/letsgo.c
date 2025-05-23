#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CUSTOMERS 10
#define MAX_ITEMS 50
#define MAX_ORDERS 20
#define MAX_DELIVERY_AGENTS 10

typedef struct {
    char name[50];
    char email[50];
} Customer;

typedef struct {
    char name[50];
    char email[50];
    char id[10];
} DeliveryAgent;

typedef struct {
    char name[50];
    float price;
    char type[10]; // Veg or NonVeg
} MenuItem;

typedef struct {
    int itemIndices[10];
    int itemCount;
    int customerIndex;
    int agentIndex;
    float total;
    int isPaid;
} Order;

Customer customers[MAX_CUSTOMERS];
int customerCount = 0;

DeliveryAgent agents[MAX_DELIVERY_AGENTS];
int agentCount = 0;

MenuItem menu[MAX_ITEMS];
int menuCount = 0;

Order orders[MAX_ORDERS];
int orderCount = 0;

// Function Declarations
void addCustomer();
void addMenuItem();
void displayMenu();
void placeOrder();
void makePayment();
void viewCustomers();
void addDeliveryAgent();
void viewDeliveryAgents();
void printOrderSummary(int index);

int main() {
    int choice;
    do {
        printf("\n===== Online Food Delivery System =====\n");
        printf("1. Add Customer\n");
        printf("2. Add Menu Item\n");
        printf("3. Display Menu\n");
        printf("4. Place Order\n");
        printf("5. Make Payment\n");
        printf("6. View All Customers\n");
        printf("7. Add Delivery Man\n");
        printf("8. View All Delivery Men\n");
        printf("0. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // flush newline

        switch (choice) {
            case 1: addCustomer(); break;
            case 2: addMenuItem(); break;
            case 3: displayMenu(); break;
            case 4: placeOrder(); break;
            case 5: makePayment(); break;
            case 6: viewCustomers(); break;
            case 7: addDeliveryAgent(); break;
            case 8: viewDeliveryAgents(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid option!\n");
        }
    } while (choice != 0);
    return 0;
}

void addCustomer() {
    if (customerCount >= MAX_CUSTOMERS) {
        printf("Customer limit reached.\n");
        return;
    }
    printf("Enter name: ");
    fgets(customers[customerCount].name, 50, stdin);
    customers[customerCount].name[strcspn(customers[customerCount].name, "\n")] = 0;

    printf("Enter email: ");
    fgets(customers[customerCount].email, 50, stdin);
    customers[customerCount].email[strcspn(customers[customerCount].email, "\n")] = 0;

    customerCount++;
    printf("Customer added.\n");
}

void addMenuItem() {
    if (menuCount >= MAX_ITEMS) {
        printf("Menu item limit reached.\n");
        return;
    }

    printf("Enter item name: ");
    fgets(menu[menuCount].name, 50, stdin);
    menu[menuCount].name[strcspn(menu[menuCount].name, "\n")] = 0;

    printf("Enter price: ");
    scanf("%f", &menu[menuCount].price);
    getchar();

    printf("Enter type (Veg/NonVeg): ");
    fgets(menu[menuCount].type, 10, stdin);
    menu[menuCount].type[strcspn(menu[menuCount].type, "\n")] = 0;

    menuCount++;
    printf("Item added to menu.\n");
}

void displayMenu() {
    if (menuCount == 0) {
        printf("Menu is empty.\n");
        return;
    }

    printf("Menu for Spice House:\n");
    for (int i = 0; i < menuCount; i++) {
        printf("- %s (%s): $%.2f\n", menu[i].name, menu[i].type, menu[i].price);
    }
}

void placeOrder() {
    if (customerCount == 0 || agentCount == 0 || menuCount == 0) {
        printf("Please ensure customers, delivery agents and menu items are available.\n");
        return;
    }

    printf("Choose Customer:\n");
    for (int i = 0; i < customerCount; i++) {
        printf("%d. %s\n", i, customers[i].name);
    }
    int custIndex;
    scanf("%d", &custIndex);
    getchar();

    printf("Choose Delivery Agent:\n");
    for (int i = 0; i < agentCount; i++) {
        printf("%d. %s\n", i, agents[i].name);
    }
    int agentIndex;
    scanf("%d", &agentIndex);
    getchar();

    printf("Select items (enter -1 to finish):\n");
    for (int i = 0; i < menuCount; i++) {
        printf("%d. %s\n", i, menu[i].name);
    }

    Order newOrder;
    newOrder.customerIndex = custIndex;
    newOrder.agentIndex = agentIndex;
    newOrder.itemCount = 0;
    newOrder.total = 0.0;
    newOrder.isPaid = 0;

    int itemIndex;
    while (1) {
        scanf("%d", &itemIndex);
        if (itemIndex == -1) break;
        if (itemIndex >= 0 && itemIndex < menuCount) {
            newOrder.itemIndices[newOrder.itemCount++] = itemIndex;
            newOrder.total += menu[itemIndex].price;
        } else {
            printf("Invalid item index.\n");
        }
    }

    orders[orderCount] = newOrder;
    printOrderSummary(orderCount);
    orderCount++;
}

void makePayment() {
    if (orderCount == 0) {
        printf("No orders to pay for.\n");
        return;
    }

    for (int i = 0; i < orderCount; i++) {
        if (!orders[i].isPaid) {
            printf("Pending Order #%d\n", i);
            printOrderSummary(i);
        }
    }

    int ord;
    printf("Enter order number to pay: ");
    scanf("%d", &ord);
    getchar();

    if (ord >= 0 && ord < orderCount && !orders[ord].isPaid) {
        float amount;
        printf("Enter amount to pay: ");
        scanf("%f", &amount);
        getchar();

        if (amount == orders[ord].total) {
            char method[10];
            printf("Enter payment method (cash/card): ");
            fgets(method, 10, stdin);
            method[strcspn(method, "\n")] = 0;

            orders[ord].isPaid = 1;
            printf("Paid $%.2f by %s.\n", amount, method);
        } else {
            printf("Incorrect amount.\n");
        }
    } else {
        printf("Invalid order number or already paid.\n");
    }
}

void viewCustomers() {
    for (int i = 0; i < customerCount; i++) {
        printf("- %s | %s\n", customers[i].name, customers[i].email);
    }
}

void addDeliveryAgent() {
    if (agentCount >= MAX_DELIVERY_AGENTS) {
        printf("Agent limit reached.\n");
        return;
    }

    printf("Enter name: ");
    fgets(agents[agentCount].name, 50, stdin);
    agents[agentCount].name[strcspn(agents[agentCount].name, "\n")] = 0;

    printf("Enter email: ");
    fgets(agents[agentCount].email, 50, stdin);
    agents[agentCount].email[strcspn(agents[agentCount].email, "\n")] = 0;

    printf("Enter agent ID: ");
    fgets(agents[agentCount].id, 10, stdin);
    agents[agentCount].id[strcspn(agents[agentCount].id, "\n")] = 0;

    agentCount++;
    printf("Delivery agent added.\n");
}

void viewDeliveryAgents() {
    for (int i = 0; i < agentCount; i++) {
        printf("- %s | ID: %s\n", agents[i].name, agents[i].id);
    }
}

void printOrderSummary(int index) {
    printf("\n===== Order Summary =====\n");
    printf("Customer: %s\n", customers[orders[index].customerIndex].name);
    printf("Delivery Agent: %s\n", agents[orders[index].agentIndex].name);
    for (int i = 0; i < orders[index].itemCount; i++) {
        int itemId = orders[index].itemIndices[i];
        printf("- %s: $%.2f\n", menu[itemId].name, menu[itemId].price);
    }
    printf("Total Amount: $%.2f\n", orders[index].total);
}
