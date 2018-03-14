import java.io.*;
import java.util.*;

public class Sum_vs_XOR {

    static long solve(long n) {
        int zeros = 0;
        while(n > 0){
            zeros += (n%2==0? 1:0);
            n /= 2;
        }
        return 1L << zeros;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long result = solve(n);
        System.out.println(result);
    }
}
