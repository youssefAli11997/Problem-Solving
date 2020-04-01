//link: https://leetcode.com/problems/count-vowels-permutation/

class Solution {
    public final int MOD = 1000000007;
    
    public int countVowelPermutation(int n) {    
        int a,e,i,o,u;
        a = e = i = o = u = 1;
    
        for(int k=1; k<n; k++){
            int a_p = a, e_p = e, i_p = i, o_p = o, u_p = u;
            
            a = e_p;
            e = (a_p + i_p) % MOD;
            i = ((a_p + e_p) % MOD + (o_p + u_p) % MOD) % MOD;
            o = (i_p + u_p) % MOD;
            u = a_p;
        }
        return ((((a+e) % MOD + (i+o) % MOD) % MOD + u) % MOD) % MOD;
    }
}
