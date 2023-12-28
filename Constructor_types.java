public class TestDefault {
    int numValue;

    public TestDefault() {
        System.out.println("Hello");
    }

    public TestDefault(int y) {
        numValue = y;
        System.out.println(numValue);
    }

    public TestDefault(int z, String text) {
        numValue = z;
        System.out.println(text +"_"+ numValue);
    }

    public static void main(String[] args) {
        TestDefault obj1 = new TestDefault(); // No arguments constructor
        TestDefault obj2 = new TestDefault(10); // Parameterised constructor with one parameter
        TestDefault obj3 = new TestDefault(20, "Mutation"); // Parameterised constructor with multiple parameters
        TestDefault obj4 = new TestDefault(5); // Example of using a constructor
    }
}
