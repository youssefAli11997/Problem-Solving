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
        
        String[][] letters = new String[27][H];
        for (int i = 0; i < H; i++) {
            String ROW = in.nextLine();
            int k=0;
            for(int j=0; j<27 && k <ROW.length(); j++){
                letters[j][i] = ROW.substring(k, k+L);
                k += L;
            }
        }

    
        String[][] answer = new String[T.length()][H];
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
                System.out.print(answer[j][i]);
            }
            System.out.println();
        }
    }
}
