//link: https://www.hackerrank.com/challenges/counter-game/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class CounterGame {

    static String counterGame(long n) {
        long counter = n;
        byte player = 0;
        while(counter != 1){
            player ^= 1;
            if(isPowerOf2(counter)){
                counter -= counter / 2;
            }
            else{
                counter -= largestPowerOf2(counter);
            }
        }
        return player == 1? "Louise":"Richard";
    }
    
    static boolean isPowerOf2(long x){
        return (x & (x-1)) == 0;
    }
    
    static long largestPowerOf2(long x){
        while((x & (x-1)) != 0){
            x &= x-1;
        }
        return x;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            String result = counterGame(n);
            System.out.println(result);
        }
        in.close();
    }
}
