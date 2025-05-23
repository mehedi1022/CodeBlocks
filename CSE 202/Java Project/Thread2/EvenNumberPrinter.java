import java.util.Scanner;

// This thread prints even numbers between min and max
class EvenNumberPrinter extends Thread {
    private int min;
    private int max;

    public EvenNumberPrinter(int min, int max) {
        this.min = min;
        this.max = max;
    }

    @Override
    public void run() {
        System.out.println("Thread " + this.getName() + " printing evens between " + min + " and " + max + ":");
        for (int i = min; i <= max; i++) {
            if (i % 2 == 0) {
                System.out.println("Thread " + this.getName() + " → " + i);
            }
        }
    }
}