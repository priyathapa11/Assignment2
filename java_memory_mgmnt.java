public class Main {
    public static void main(String[] args) {
       // Dynamically allocate memory on the heap
        int[] numbers = new int[3];

        numbers[0] = 10;
        numbers[1] = 20;
        numbers[2] = 30;

        System.out.println("Numbers stored in heap memory:");

        for (int number : numbers) {
            System.out.println(number);
        }

        // Remove reference to the array
        numbers = null;

        // Suggest garbage collection
        System.gc();

        System.out.println("Memory will be cleaned by the garbage collector.");
    }
}
