package CodeForces.CF_Round_479_Div3;

import java.util.Scanner;

public class A_WrongSubtraction {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();

        for(int i=0; i<k; i++){
            if(n % 10 == 0){
                n /= 10;
            }
            else{
                n--;
            }
        }
        System.out.print(n);
    }
}
