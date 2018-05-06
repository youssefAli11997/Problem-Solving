package CodeForces.CF_Round_479_Div3;

import java.util.ArrayList;
import java.util.Scanner;

public class C_LessOrEqual {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();

        ArrayList<Integer> arr = new ArrayList<>();

        for(int i=0; i<n ;i++){
            arr.add(in.nextInt());
        }
        arr.sort(null);
        //System.out.println(arr);

        int ans = -1;

        if(k != 0 && (arr.size() == k || !arr.get(k-1).equals(arr.get(k))))
            ans = arr.get(k-1);

        if(k == 0 && arr.get(0) != 1)
            ans = 1;

        System.out.println(ans);
    }
}
