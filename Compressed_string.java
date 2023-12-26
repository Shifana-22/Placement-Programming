public class StringCompression {
    
    public static String compressString(String input) {
        if (input == null || input.isEmpty()) {
            return input;
        }

        StringBuilder compressed = new StringBuilder();
        int count = 1;

        for (int i = 0; i < input.length() - 1; i++) {
            if (input.charAt(i) == input.charAt(i + 1)) {
                count++;
            } else {
                compressed.append(input.charAt(i));
                if (count > 1) {
                    compressed.append(count);
                }
                count = 1;
            }
        }

        // Append the last character and its count
        compressed.append(input.charAt(input.length() - 1));
        if (count > 1) {
            compressed.append(count);
        }

        return compressed.toString();
    }

    public static void main(String[] args) {
        String input1 = "AAABBC";
        String input2 = "AAABBCCCDE";

        System.out.println("Input: " + input1);
        System.out.println("Output: " + compressString(input1));

        System.out.println("\nInput: " + input2);
        System.out.println("Output: " + compressString(input2));
    }
}
