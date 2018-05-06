package CodeForces.CF_Round_479_Div3;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class B_TwoGram {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(); in.nextLine();
        String s = in.nextLine();
        Map<String, Integer> m = new HashMap<>();
        for(int i=0; i<s.length()-1; i++){
            String x = s.substring(i,i+2);
            if(!m.containsKey(x))
                m.put(x, 1);
            else
                m.put(x, m.get(x) + 1);
        }
        String x = ""; int mx = -1;
        for(Map.Entry<String, Integer> e: m.entrySet()){
            if(e.getValue() > mx){
                mx = e.getValue();
                x = e.getKey();
            }
        }
        System.out.println(x);
    }
}
