import java.util.*;

public class MiniMaxSum {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long[] arr = new long[5];
        for (int i = 0; i < 5; i++) {
            arr[i] = scanner.nextLong();
        }
        scanner.close();
        
        Arrays.sort(arr);
        long minSum = arr[0] + arr[1] + arr[2] + arr[3];
        long maxSum = arr[1] + arr[2] + arr[3] + arr[4];
        
        System.out.println(minSum + " " + maxSum);
    }
}
