package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem6 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        String s = in.next();
        int[] chCount = new int[26];
        for(int i=0; i<s.length(); i++) {
            chCount[s.charAt(i) - 'a']++;
        }
        for(int i=25; i>=0; i--) {
            if(chCount[i] != 0) {
                for(int j=0; j<chCount[i]; j++)
                    System.out.print((char)('a' + i));
                break;
            }
        }
    }
}
