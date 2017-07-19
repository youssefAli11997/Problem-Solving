// problem link : http://codingbat.com/prob/p189576

public int maxSpan(int[] nums) {
  int max = 0;
  for(int i=0; i<nums.length; i++) {
    int x = i, F = -1, L = -1;
    for(int j=0; j<nums.length; j++) if(nums[j] == nums[x]){ F = j; break;}
    for(int j=nums.length-1; j>=0; j--) if(nums[j] == nums[x]){ L = j; break;}
    max = Math.max(max, L - F + 1);
  }
  return max;
}
