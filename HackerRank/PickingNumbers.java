//link: https://www.hackerrank.com/challenges/picking-numbers/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class PickingNumbers {

    static int pickingNumbers(int[] a) {
        // Complete this function
        int[] freq = new int[100];
        int max = 0;
        for(int i=0; i<a.length; i++){
            freq[a[i]]++;
            int val = freq[a[i]] + Math.max((a[i] == 0? 0 : freq[a[i]-1]), (a[i] == freq.length - 1? 0 : freq[a[i]+1]));
            if(val > max){
                max = val;
            }
        }
        return max;
        // another solution
        /*
        int[] freq = new int[101];
        int max = 0;
        for(int i=0; i<a.length; i++){
            freq[a[i]]++;
        }
        for(int i=1; i<=100; i++){
            int val = freq[i] + freq[i-1];
            if(val > max){
                max = val;
            }
        }
        return max;
        */
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i = 0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int result = pickingNumbers(a);
        System.out.println(result);
        in.close();
    }
}
