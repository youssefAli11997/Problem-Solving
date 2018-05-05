//link: https://codefights.com/challenge/SfdjmLKbQQ7v48aCe/
int fifthBitA2PlusB2(int a, int b) {
    BigInteger ai = BigInteger.valueOf(a),
               bi = BigInteger.valueOf(b);
    return ai.multiply(ai).add(bi.multiply(bi)).testBit(5) ? 1 : 0;
}
