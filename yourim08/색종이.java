package yourim08;

import java.util.Scanner;

public class 색종이 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        int count = 0;
        int arr[] = new int[n * 2];
        int board[][] = new int[30][30];
        for (int i = 0; i < n; i++) {
            String str[] = sc.nextLine().split(" ");
            arr[count] = Integer.parseInt(str[0]) - 1;
            arr[count + 1] = Integer.parseInt(str[1]) - 1;
            count += 2;
        }

        // for(int a: arr){
        //     System.out.print(a+" ");
        // }

        for (int i = 0; i < n; i++) {
            int x = arr[i * 2];
            int y = arr[i * 2 + 1];
            for (int j = x; j < x+10; j++) {
                for (int k = y; k < y+10; k++) {
                    System.out.print("("+j+", "+k+")");
                    board[j][k] += 1;
                }
                System.out.println();
            }
        }

        // for (int i = 0; i < board.length; i++) {
        //     for (int j = 0; j < board[i].length; j++) {
        //         System.out.print(board[i][j] + " ");
        //     }
        //     System.out.println();
        // }

        int result = 0;
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[i].length; j++) {
                if(board[i][j] != 0){
                    result++;
                }
            }
        }
        System.out.println(result);
    }
}
