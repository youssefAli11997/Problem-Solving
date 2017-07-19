// problem link : http://codingbat.com/prob/p183649

public int bunnyEars(int bunnies) {
  if(bunnies == 0) return 0;
  return 2 + bunnyEars(bunnies - 1);
}
