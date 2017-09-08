import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;


public class Main {

	static List<BigInteger> arr = new ArrayList<>();
	static BigInteger max,x,prod,end;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		end = new BigInteger("-999999");
		while(sc.hasNext()){
			x = sc.nextBigInteger();
			if(!x.equals(end))
				arr.add(x);
			else{
				max = arr.get(0);
				for(int i=0; i<arr.size(); i++){
					prod = new BigInteger("1");
					for(int j=i; j<arr.size(); j++){
						prod = prod.multiply(arr.get(j));
						max = max.max(prod);
					}
				}
				System.out.println(max);
				arr.clear();
			}
		}
	}

}
