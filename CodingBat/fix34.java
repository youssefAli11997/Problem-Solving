// problem link : http://codingbat.com/prob/p159339

public int[] fix34(int[] nums) {
  for(int i=0; i<nums.length; i++) if(nums[i] == 3) {
    for(int j=1; j<nums.length; j++) if(nums[j] == 4 && nums[j-1] != 3) {
      nums[j] = nums[i+1];
      nums[i+1] = 4;
      break;
    }
  }
  return nums;
}
