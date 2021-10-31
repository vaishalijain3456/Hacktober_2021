public class NumberOfSteps {

    public static int getSteps(int n) {
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;
        else if (n == 2)
            return 2;
        else
            return getSteps(n - 3) + getSteps(n - 2) + getSteps(n - 1);
    }

    public static void main(String argc[]) {
        int n = 7;
        System.out.println(getSteps(n));
    }
}