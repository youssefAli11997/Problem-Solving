class Solution {
public:

int reverse(int x) {
        int ans = 0;
        while(x){
            int tmp = ans*10 + x%10;
            if(tmp / 10 != ans) return 0;
            x /= 10;
            ans = tmp;
        }
        return ans;
}
};
