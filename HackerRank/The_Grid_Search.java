//problem link: https://www.hackerrank.com/challenges/the-grid-search/problem
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class The_Grid_Search {
    
    public static boolean foundPattern(String[] P, String[] G, int xOffset, int yOffset){
        for(int i=0; i < P.length; i++){
            for(int j=0; j < P[i].length(); j++){
                if(P[i].charAt(j) != G[i + xOffset].charAt(j + yOffset))
                    return false;
            }
        }        
        return true;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int R = in.nextInt();
            int C = in.nextInt();
            String[] G = new String[R];
            for(int G_i=0; G_i < R; G_i++){
                G[G_i] = in.next();
            }
            int r = in.nextInt();
            int c = in.nextInt();
            String[] P = new String[r];
            for(int P_i=0; P_i < r; P_i++){
                P[P_i] = in.next();
            }
            boolean sol = false;
            for(int i=0; i < G.length - P.length + 1 && !sol; i++){
                for(int j=0; j < G[0].length() - P[0].length() + 1 && !sol; j++){
                    if(P[0].charAt(0) == G[i].charAt(j) && foundPattern(P,G,i,j)){
                        sol = true;
                    }   
                }
            }
            System.out.println(sol? "YES":"NO");
        }
    }
}
