package DaysOfCode30;

/**
 *
 * @author Guhan
 */

import java.util.Scanner;

public class Problem7 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        int n=in.nextInt(), m=in.nextInt();
        in.nextLine();
        String[] s = new String[n];
        for(int i=0; i<n; i++) {
            s[i] = in.next();
            in.nextLine();
        }
        
        int[][] coords = new int[4][2];
        int index=0;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(s[i].charAt(j) == '*') {
                    coords[index][0] = i+1;
                    coords[index][1] = j+1;
                    index++;
                }
                
                if(index >= 3)
                    break;
            }
            if(index >= 3)
                    break;
        }
        
        int[][] xCount = new int[3][2];
        int[][] yCount = new int[3][2];
        for(int i=0; i<3; i++) {
            int x1 = coords[i][0], y1 =coords[i][1];
            xCount[i][0] = x1;
            yCount[i][0] = y1;
            for(int j=0; j<3; j++) {
                int x2 = coords[j][0], y2 =coords[j][1];
                if(x1 == x2)
                    xCount[i][1]++;
                if(y1 == y2)
                    yCount[i][1]++;
            }
        }
        
        for(int i=0; i<3; i++) {
            if(xCount[i][1] == 1) {
                System.out.print(xCount[i][0] + " ");
                break;
            }
        }
        
        for(int i=0; i<3; i++) {
            if(yCount[i][1] == 1) {
                System.out.print(yCount[i][0] + " ");
                break;
            }
        }
    }
}
