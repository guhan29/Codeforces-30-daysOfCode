//package DaysOfCode30.day2;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt(), count=0;
        in.nextLine();
        int max = in.nextInt(), min = max;
        for(int i=1; i<n; i++) {
            int temp = in.nextInt();
            if(temp > max) {
                max = temp;
                count++;
            } else if(temp < min) {
                min = temp;
                count++;
            }
        }
        System.out.println(count);
    }
}
