//link: http://codingbat.com/prob/p191363
public int makeChocolate(int small, int big, int goal) {
  int needed = 0;
  if(goal / 5 > big){
      needed += 5 * (goal /  5 - big);
      small -= 5 * (goal /  5 - big);
      big += goal /  5 - big;
  }
  if(goal % 5 > small)
      return -1;
  needed += goal % 5;
  return needed;
}
