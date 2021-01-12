package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String name = in.next();
        int[] ch = new int[26];
        for(int i=0; i<name.length(); i++)
            ch[name.charAt(i)-'a'] = 1;
        int count=0;
        for(int i=0; i<26; i++)
            if(ch[i] == 1)
                count++;
        if(count%2 == 0)
            System.out.println("CHAT WITH HER!");
        else
            System.out.println("IGNORE HIM!");
    }
}
