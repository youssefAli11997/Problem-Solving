package CodeForces;

import java.util.Scanner;

public class _916A_Jamie_and_Alarm_Snooze {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int x = in.nextInt(),hh = in.nextInt(),mm = in.nextInt(),i=0;
        while(true){
            if(String.valueOf(hh + "" + mm).contains("7"))
            break;
            if(mm < x){
                mm += 60;
                if(hh == 0)
                    hh = 24;
                hh--;
            }
            mm -= x;
            i++;
        }
        System.out.println(i);
    }
}
