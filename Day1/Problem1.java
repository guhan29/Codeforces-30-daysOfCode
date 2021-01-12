package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt(), totalCount=0;
        for(int tt=0; tt<t; tt++) {
            int temp, count=0;
            for(int i=0; i<3; i++) {
                temp = in.nextInt();
                if(temp == 1)
                    count++;
            }
            in.nextLine();
            if(count >= 2)
                totalCount++;
        }
        System.out.println(totalCount);
    }
}
