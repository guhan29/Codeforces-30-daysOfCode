package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Problem2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //long[] s = new long[4];
        Set<String> set = new HashSet<String>();
        for(int i=0; i<4; i++)
            set.add(in.next());
        System.out.println(4 - set.size());
        
    }
}
