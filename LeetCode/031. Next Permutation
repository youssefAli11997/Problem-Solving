// problem link : https://leetcode.com/problems/next-permutation/description/
class Solution {
    public void nextPermutation(int[] nums) {
        int p = 0, q = 0, len = nums.length;
        for(int i=len-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                p = i;
                break;
            }
        }
        for(int i=len-1; i>=0; i--){
            if(nums[i] > nums[p]){
                q = i;
                break;
            }
        }
        System.out.println(p + " " + q);
        if(p == 0 && q == 0){
            reverse(nums, 0, len-1);
            return;
        }
        // swap p and q
        int temp = nums[p];
        nums[p] = nums[q];
        nums[q] = temp;
        System.out.println(nums[p] + " " + nums[q]);
        reverse(nums, p+1, len-1);
        System.out.println(nums[p] + " " + nums[q]);
    }
    
    public void reverse(int[] nums, int left, int right){
        while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
}
