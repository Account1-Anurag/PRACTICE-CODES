import java.util.Scanner;

public class Main {
    public static int findMax(long[] arr) {
        int maxNum = (int) arr[0];
        for (int i = 1; i < arr.length; ++i) {
            if (arr[i] > maxNum) {
                maxNum = (int) arr[i];
            }
        }
        return maxNum;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            long[] x = new long[n - 1];
            for (int i = 0; i < n - 1; ++i) {
                x[i] = scanner.nextLong();
            }
            int maxi = findMax(x);
            long[] ans = new long[n];
            ans[0] = 1 + maxi;
            for (int i = 1; i < n; i++) {
                ans[i] = ans[i - 1] + x[i - 1];
            }
            for (int i = 0; i < n; i++) {
                System.out.print(ans[i] + " ");
            }
            System.out.println();
        }
    }
}