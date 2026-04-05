package yourim08;

import java.util.Scanner;

public class 배수와약수 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        String answer = "";
        while (true){
            String str[] = sc.nextLine().split(" ");
            int a = Integer.parseInt(str[0]);
            int b = Integer.parseInt(str[1]);

            if(a == 0 && b == 0){
                System.out.print(answer); 
                break;
            }

            else {
                if (b % a == 0){
                    answer += "factor"+"\n";
                }

                else if(a % b == 0){
                    answer += "multiple"+"\n";
                }

                else {
                    answer += "neither"+"\n";
                }
            }
        }
    }
}
