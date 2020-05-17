// link: https://app.codesignal.com/challenge/K7d4tLBrAH29JbhFi

char[] gm;
int[][] dp;
int MOD = 1000000007;

int mapDecoding(String message) {
    if(message.length() == 0) return 1;
    gm = message.toCharArray();
    dp = new int[100002][3];
    for(int i=0; i<dp.length; i++)
        Arrays.fill(dp[i], -1);

    return (solve(0, 1) + solve(0, 2)) % MOD;
}

int solve(int i, int length) { // length 1 or 2
    if(!valid(i, length)) return 0;
    if(dp[i][length] != -1) return dp[i][length];

    if(i+length == gm.length) return 1;
    return dp[i][length] = (solve(i+length, 1) + solve(i+length, 2)) % MOD;
}

boolean valid(int i, int length) {
    if(i+length-1 >= gm.length) return false;
    if(length == 1) return gm[i] != '0';
    else if(gm[i] == '1') return gm[i+1] >= '0' && gm[i+1] <= '9';
    else if(gm[i] == '2') return gm[i+1] >= '0' && gm[i+1] <= '6';
    return false;
}
