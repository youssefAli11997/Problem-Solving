// problem link : http://codingbat.com/prob/p185204

public boolean splitArray(int[] nums) {
  return splitArray(nums, 0, 0, 0);
}

public boolean splitArray(int[] nums, int index, int sum1, int sum2){
  if(index == nums.length)
    return sum1 == sum2;
  if(splitArray(nums, index+1, sum1 + nums[index], sum2))
    return true;
  if(splitArray(nums, index+1, sum1, sum2 + nums[index]))
    return true;
  return false;
}
