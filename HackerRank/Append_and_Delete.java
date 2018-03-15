import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;

public class Append_and_Delete {

    static String appendAndDelete(String s, String t, int k) {
        if(Math.abs(s.length() - t.length()) > k)
            return "No";
        /*if(s.equals(t) && 2 * s.length <= k){
            return "YES";
        }*/
        int index = firstNonMatchingIndex(s, t);
        int minEdit = s.length() - index + t.length() - index;
        //System.out.println(minEdit);
        //System.out.println(s.length() +" "+ index + " "+ t.length());
        if(minEdit == k || s.length() + t.length() <= k)
            return "Yes";
        if(minEdit < k && (k-minEdit)%2 == 0)
            return "Yes";
        return "No";
    }
    
    static int firstNonMatchingIndex(String s, String t){
        int minLength = Math.min(s.length(), t.length()), ans = 0;
        for(int i=0; i<minLength; i++){
            if(s.charAt(i) == t.charAt(i))
                ans++;
            else
                break;
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        String t = in.next();
        int k = in.nextInt();
        String result = appendAndDelete(s, t, k);
        System.out.println(result);
        in.close();
    }
}
