//link: https://app.codesignal.com/arcade/code-arcade/corner-of-0s-and-1s/b5z4P2r2CGCtf8HCR

func killKthBit(n: Int, k: Int) -> Int {
  return Int(UInt32(n) & ~UInt32((1 << (k-1))))
}
