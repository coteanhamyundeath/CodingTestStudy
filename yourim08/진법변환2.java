package yourim08;

import java.util.Scanner;

public class 진법변환2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String[] arr = sc.nextLine().split(" ");
        int n = Integer.parseInt(arr[0]);
        int b = Integer.parseInt(arr[1]);
        int max = n/b;
    }
}
