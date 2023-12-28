public class Main {
    public void rearrangeArray(int[] nums) {
        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {
            while (left <= right && nums[left] < 0) {
                left++;
            }
            while (left <= right && nums[right] >= 0) {
                right--;
            }
            if (left <= right) {
                int temp = nums[left];
                nums[left] = nums[right];
                nums[right] = temp;
                left++;
                right--;
            }
        }
    }

    public static void main(String[] args) {
        int[] input = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
        Main rearranger = new Main();
        rearranger.rearrangeArray(input);

        System.out.print("Output: ");
        for (int num : input) {
            System.out.print(num + " ");
        }
    }
}