//link: https://leetcode.com/problems/gray-code

class Solution {
    public List<Integer> grayCode(int n) {
        ArrayList<Integer> codes = new ArrayList<Integer>();
        
        codes.add(0);
        if(n == 0)
            return codes;
        
        codes.add(1);
        if(n == 1)
            return codes;
        
        codes.add(3);
        codes.add(2);
        
        for(int i=2; i<n; i++){
            for(int j=codes.size()-1; j>=0; j--){
                codes.add(codes.get(j) + (int)(Math.pow(2, i)));
            }
        }
        
        return codes;
    }
}
