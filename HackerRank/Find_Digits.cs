// problem link : https://www.hackerrank.com/challenges/find-digits/

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
class Solution {

    static void Main(String[] args) {
        int t = Convert.ToInt32(Console.ReadLine());
        for(int a0 = 0; a0 < t; a0++){
            int n = Convert.ToInt32(Console.ReadLine());
            int tmp = n, ans = 0;
            while(tmp > 0){
                int dig = tmp % 10;
                tmp /= 10;
                if(dig == 0) continue;
                if(n % dig == 0)ans++;
            }
            Console.WriteLine(ans);
        }
    }
}
