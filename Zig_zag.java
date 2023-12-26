public class ZigZagPattern {
    public static void main(String[] args) {
        String input = "zohocorporationteam";
        printZigZag(input);
    }

    public static void printZigZag(String input) {
        int n = input.length();
        int rows = 7; // Number of rows as per the desired output

        char[][] matrix = new char[rows][n];
        int row = 0;
        int col = 0;
        boolean down = true;

        for (char c : input.toCharArray()) {
            matrix[row][col] = c;
            if (row == 0) {
                down = true;
            } else if (row == rows - 1) {
                down = false;
            }

            if (down) {
                row++;
            } else {
                row--;
                col++;
            }
        }

        // Printing the zigzag pattern
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] != '\u0000') {
                    System.out.print(matrix[i][j] + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }
}
