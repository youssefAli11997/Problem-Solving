//link: https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
import java.io.*;
import java.math.*;
import java.text.*;
import java.util.*;
import java.util.regex.*;

public class Cats_and_a_Mouse {

    /*
     * Complete the catAndMouse function below.
     */
    static String catAndMouse(int x, int y, int z) {
        /*
         * Write your code here.
         */
        int distA = Math.abs(x-z);
        int distB = Math.abs(y-z);
        return distA < distB ? "Cat A" : distA > distB ? "Cat B" : "Mouse C";
    }


    private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bw = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = Integer.parseInt(scan.nextLine().trim());

        for (int qItr = 0; qItr < q; qItr++) {
            String[] xyz = scan.nextLine().split(" ");

            int x = Integer.parseInt(xyz[0].trim());

            int y = Integer.parseInt(xyz[1].trim());

            int z = Integer.parseInt(xyz[2].trim());

            String result = catAndMouse(x, y, z);

            bw.write(result);
            bw.newLine();
        }

        bw.close();
    }
}
