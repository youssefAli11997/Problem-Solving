package AtCoder;

import java.util.Scanner;

public class Candies {

    static int n;
    static int[][] g;

    public static int maxPath(int i, int j){
        if(i==1 && j == n-1){
            return g[i][j];
        }
        if(i>1 || j>n-1){
            return 0;
        }

        return g[i][j] + Math.max(maxPath(i+1,j), maxPath(i,j+1));
    }

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        n = in.nextInt();
        g = new int[2][n];
        for(int i=0; i<2; i++){
            for(int j=0; j<n; j++){
                g[i][j] = in.nextInt();
            }
        }
        System.out.println(maxPath(0,0));

    }
}
