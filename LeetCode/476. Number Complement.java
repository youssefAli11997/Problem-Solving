//link: https://leetcode.com/problems/number-complement/description/
class Solution {
    int flipped = 0;
    public int findComplement(int num) {
        if(num == 0)
            return 1;
        recurse(num);
        return flipped;
    }
    
    private void recurse(int num) {
        if(num == 0)
            return;
        recurse(num / 2);
        flipped <<= 1;
        flipped += 1 - (num % 2);
    }
}
