/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem10 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt(), k = in.nextInt(), temp, count=0;
        in.nextLine();
        int[] nums= new int[n];
        for(int i=0; i<n; i++) {
            nums[i] = in.nextInt();
        } 
        
        int i=0;
        while(i < n && nums[i]!=0 && nums[i] >= nums[k-1])
            ++i;
        System.out.println(i);
    }
}
