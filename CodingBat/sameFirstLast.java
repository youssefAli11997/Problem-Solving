//link: http://codingbat.com/prob/p118976
public boolean sameFirstLast(int[] nums) {
  if(nums.length >= 1 && nums[0] == nums[nums.length-1])
    return true;
  return false;
}
