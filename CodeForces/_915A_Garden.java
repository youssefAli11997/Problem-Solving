package CodeForces;

import java.util.Scanner;

public class _915A_Garden {

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt()
          , k = in.nextInt(), x, ans = 1000;

        for(int i=0; i<n; i++){
            x = in.nextInt();
            if(k % x == 0)
                ans = Math.min(ans, k / x);
        }
        System.out.println(ans);
    }
}
