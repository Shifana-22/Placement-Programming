public class Main {
    public int removeDuplicates(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }
        
        int uniqueCount = 1; // At least one unique element
        for (int i = 1; i < nums.length; i++) {
            if (nums[i] != nums[i - 1]) {
                nums[uniqueCount] = nums[i];
                uniqueCount++;
            }
        }
        
        return uniqueCount;
    }

    public static void main(String[] args) {
        int[] example1 = {22, 22, 77, 77, 88, 89, 89};
        Main test1 = new Main();
        int uniqueCount = test1.removeDuplicates(example1);

        System.out.println("Output: " + uniqueCount);
        for (int i = 0; i < uniqueCount; i++) {
            System.out.print(example1[i] + " ");
        }
    }
}
