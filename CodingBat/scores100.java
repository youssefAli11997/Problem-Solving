// problem link : http://codingbat.com/prob/p179487

public boolean scores100(int[] scores) {
  if(scores.length <= 1) return false;
  return (scores[0] == 100 && scores[1] == 100) ||
         scores100(Arrays.copyOfRange(scores, 1, scores.length));
}
