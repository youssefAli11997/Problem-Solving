class Solution {
public:
    string convert(int num){
        string s = "";
        while(num){
            s = (char)((num%2) + '0') + s;
            num /= 2;
        }
        return s;
    }

    int hammingDistance(int x, int y) {
        string bx = convert(x);
        string by = convert(y);
        
        int mn = min(bx.size(),by.size());
        int mx = max(bx.size(),by.size());
        int diff = mx - mn;
        int ham = 0;
        
        if(bx.size() == mn) for(int i=0; i<diff; i++) bx = "0" + bx;
        if(by.size() == mn) for(int i=0; i<diff; i++) by = "0" + by;
        
        for(int i=0; i<mx; i++) if(bx[i] != by[i])ham++;
        return ham;
    }
};
