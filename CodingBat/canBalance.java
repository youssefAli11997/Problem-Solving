// problem link : http://codingbat.com/prob/p158767

public boolean canBalance(int[] nums) {
  int sum = 0, other = 0;
  for(int num : nums)
    sum += num;
  for(int num : nums){
    other += num;
    sum -= num;
    if(other == sum)
      return true;
  }
  return false;
}
