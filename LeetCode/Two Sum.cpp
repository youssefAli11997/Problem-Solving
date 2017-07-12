class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sz = nums.size();
        for(int i=0; i<sz; i++){
            for(int j=i+1; j<sz; j++)
                if(nums[i]+nums[j]==target){
                    vector<int> v(2); v[0] = i; v[1] = j;
                    return v;
                }
        }
    }
};