package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if(n%2 != 0)
            System.out.println(-1);
        else {
            int[] p = new int[n];
            int index=0;
            for(int i=2; i<=n && index<n; i+=2) {
                p[i-2] = i;
                index += 2;
            }
            
            index = 1;
            for(int i=1; i<=n && index<n; i+=2) {
                p[index] = i;
                index += 2;
            }
            
            for(int i=0; i<n; i++)
                System.out.print(p[i] + " ");
        }
    }
}
