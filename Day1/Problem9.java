package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem9 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt(), sum=0, temp;
        in.nextLine();
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                temp = in.nextInt();
                if(i==j || i==n/2 || j==n/2 || i+j==n-1) {
                    sum += temp;
                }
            }
            in.nextLine();
        }
        System.out.println(sum);
    }
}
