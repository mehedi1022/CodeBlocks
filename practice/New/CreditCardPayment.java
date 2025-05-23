package New;

public class CreditCardPayment implements PaymentProcessor {
    @Override
    public void pay(double amount) {
        System.out.println("Paid $" + amount + " by credit card.");
    }
}
