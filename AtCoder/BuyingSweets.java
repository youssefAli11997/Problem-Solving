package AtCoder;

import java.util.Scanner;

public class BuyingSweets {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        System.out.println((x-a)%b);
    }
}
