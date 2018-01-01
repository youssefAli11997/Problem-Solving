// link: https://www.hackerrank.com/challenges/permutation-equation/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Sequence Equation {

    static int[] permutationEquation(int[] p) {
        // Complete this function
        int[] res = new int[p.length];
        int index = 0;
        for(int x=1; x<=p.length; x++){
            for(int i=0; i<p.length; i++){
                if(p[p[i] - 1] == x){
                    res[index] = i + 1;
                    index++;
                    break;
                }
            }
        }
        return res;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] p = new int[n];
        for(int p_i = 0; p_i < n; p_i++){
            p[p_i] = in.nextInt();
        }
        int[] result = permutationEquation(p);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");


        in.close();
    }
}
