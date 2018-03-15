import java.io.*;
import java.util.*;
public class Missing_in_arithmetic_progression {
   public static void main(String args[] ) throws Exception {

	    Scanner in = new Scanner(System.in);
	    int n = in.nextInt(), first = 0, last = 0, x, actualSum = 0;
	    for(int i=0; i<n; i++){
	        x = in.nextInt();
	        actualSum += x;
	        if(i==0)
	            first = x;
	        if(i==n-1)
	            last = x;
	    }
	    int trueSum = (n+1)*(first+last)/2;
	    System.out.println(trueSum - actualSum);

   }
}
