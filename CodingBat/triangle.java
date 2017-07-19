// problem link : http://codingbat.com/prob/p194781

public int triangle(int rows) {
  if(rows == 0) return 0;
  return rows + triangle(rows - 1);
}
