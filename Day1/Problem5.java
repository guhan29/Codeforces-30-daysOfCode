package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem5 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt(), m=in.nextInt(), temp=0, a=0, count=0;
        while(a*a <= n) {
            temp = a + (int)Math.pow((n-a*a), 2);
            // System.out.println(temp + " " + b + " " + Math.sqrt(n - b));
            if(temp == m)
                count++;
            a++;
        }
        System.out.println(count);
    }
}
