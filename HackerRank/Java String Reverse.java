// problem link : https://www.hackerrank.com/challenges/java-string-reverse/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        String B = new StringBuilder(A).reverse().toString();
        if(A.equals(B)) System.out.println("Yes");
        else System.out.println("No");
    }
}
