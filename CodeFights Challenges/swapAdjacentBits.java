// link: https://app.codesignal.com/arcade/code-arcade/corner-of-0s-and-1s/dShYZZT4WmvpmfpgB/solutions

int swapAdjacentBits(int n) {
  return ((n & 0x55555555) << 1) | ((n & 0xAAAAAAAA) >> 1);
}
