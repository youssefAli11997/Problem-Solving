import java.util.*;
import java.io.*;
import java.math.*;

class ASCII_Art {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int L = in.nextInt();
        int H = in.nextInt();
        if (in.hasNextLine()) {
            in.nextLine();
        }
        String T = in.nextLine();
        
        char[][][] letters = new char[27][H][L];
        for (int i = 0; i < H; i++) {
            String ROW = in.nextLine();
            int k=0;
            for(int j=0; j<27 && k <ROW.length(); j++){
                for(int m=0; m<L; m++){
                    letters[j][i][m] = ROW.charAt(k);
                    k++;    
                } 
            }
        }

    
        char[][][] answer = new char[T.length()][H][L];
        for(int i=0; i<T.length(); i++){
            char c = Character.toLowerCase(T.charAt(i));
            if(c >= 'a' && c <= 'z'){
                answer[i] = letters[c-'a'];
            }
            else{
                answer[i] = letters[26];
            }
        }
        
        for(int i=0; i<H; i++){
            for(int j=0; j<answer.length; j++){
                for(int k=0; k<L; k++){
                    System.out.print(answer[j][i][k]);
                }
            }
            System.out.println();
        }
    }
}
