// problem link : https://codefights.com/challenge/H3xfuW74xaSgAXaSt/
// solution by : youssef_ali
// codefights profile : https://codefights.com/profile/youssef_ali

boolean isSpecialPalindrome(int n) {
    String s = Integer.toString(n, 2);
    int o = 0, l = 0;
    for(int i=0; i<=s.length()/2; i++){
        if(s.charAt(i) != s.charAt(s.length() - 1 - i))
            return false;
         System.out.println(i + " " + (s.length() - 1 - i));
        o += ((s.charAt(i) == '0')? 1:0) + ((s.charAt(s.length() - 1 - i) == '0' && i<s.length()/2)? 1:0);
        l += ((s.charAt(i) == '1')? 1:0) + ((s.charAt(s.length() - 1 - i) == '1'&& i<s.length()/2)? 1:0);
    }
    return o == 1 && l > 0;
}
