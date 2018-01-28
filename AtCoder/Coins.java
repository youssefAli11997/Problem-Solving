package AtCoder;

import java.util.Scanner;

public class Coins {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        int x = in.nextInt();
        int ans = 0;

        for(int i=0; i<=a; i++){
            for(int j=0; j<=b; j++){
                for(int k=0; k<=c ;k++){
                    if(500*i+100*j+50*k == x){
                        ans++;
                    }
                }
            }
        }
        System.out.println(ans);

    }
}
