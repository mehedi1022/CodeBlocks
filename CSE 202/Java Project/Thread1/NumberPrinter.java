// NumberPrinter.java
class NumberPrinter extends Thread {
    private int divisor;

    public NumberPrinter(int divisor) {
        this.divisor = divisor;
    }

    @Override
    public void run() {
        int count = 0;
        int num = 1;

        while (count < 10) {
            if (num % divisor == 0) {
                System.out.println("Thread for n = " + divisor + " → " + num);
                count++;
            }
            num++;
        }
    }
}
