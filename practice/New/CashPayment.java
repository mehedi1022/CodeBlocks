package New;

public class CashPayment implements PaymentProcessor {
    @Override
    public void pay(double amount) {
        System.out.println("Paid $" + amount + " in cash.");
    }
}

