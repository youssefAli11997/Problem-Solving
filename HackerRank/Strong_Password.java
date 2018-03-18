import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Strong_Password {

    static int minimumNumber(int n, String password) {
        boolean[] cont = new boolean[4];
        String numbers = "0123456789";
        String lower_case = "abcdefghijklmnopqrstuvwxyz";
        String upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String special_characters = "!@#$%^&*()-+";
        
        for(int i=0; i<n; i++){
            if(!cont[0] && numbers.contains(password.substring(i,i+1)))
                cont[0] = true;
            if(!cont[1] && lower_case.contains(password.substring(i,i+1)))
                cont[1] = true;
            if(!cont[2] && upper_case.contains(password.substring(i,i+1)))
                cont[2] = true;
            if(!cont[3] && special_characters.contains(password.substring(i,i+1)))
                cont[3] = true;
        }
        int cnt = 4;
        for(int i=0; i<4; i++)
            cnt -= cont[i]? 1:0;
        return n<6? Math.max(cnt, 6-n): cnt;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String password = in.next();
        int answer = minimumNumber(n, password);
        System.out.println(answer);
        in.close();
    }
}
