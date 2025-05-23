// Main class
public class Application {
    public static void main(String[] args) {
        // Creating 3 threads with different divisors
        Thread t1 = new NumberPrinter(2);
        Thread t2 = new NumberPrinter(3);
        Thread t3 = new NumberPrinter(5);

        // Start all threads
        t1.start();
        t2.start();
        t3.start();
    }
}
