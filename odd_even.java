import java.util.ArrayList;
import java.util.List;

public class OddEvenSeparation {

    public static void main(String[] args) {
        int[] inputArray = {10, 3, 5, 12, 17, 22};
        List<Integer> evenElements = new ArrayList<>();
        List<Integer> oddElements = new ArrayList<>();

        for (int num : inputArray) {
            if (num % 2 == 0) {
                evenElements.add(num);
            } else {
                oddElements.add(num);
            }
        }

        System.out.println("Even Elements: " + evenElements);
        System.out.println("Odd Elements: " + oddElements);
    }
}
