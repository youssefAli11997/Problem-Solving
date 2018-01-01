// link: https://www.hackerrank.com/challenges/permutation-equation/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Sequence_Equation {

    static int[] permutationEquation(int[] p) {
        // Complete this function
        int[] res = new int[p.length];
        int index = 0;
        for(int i=0; i<p.length; i++){
            res[p[p[i] - 1] - 1] = i + 1;
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
