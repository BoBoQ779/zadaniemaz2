import java.util.Arrays;

public class Sort {
    public static void main(String[] args) {
        int[] numbers = {5, 2, 8, 1, 9, 3};

        System.out.println("P2 - Zadanie Jenkins");
        System.out.println("Tablica przed sortowaniem: " + Arrays.toString(numbers));

        Arrays.sort(numbers);

        System.out.println("Tablica po sortowaniu: " + Arrays.toString(numbers));
    }
}
