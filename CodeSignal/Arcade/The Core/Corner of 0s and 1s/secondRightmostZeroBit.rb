#link: https://app.codesignal.com/arcade/code-arcade/corner-of-0s-and-1s/9nSj6DgqLDsBePJha

def secondRightmostZeroBit(n)
    return 2 ** n.to_s(2).reverse!.sub!('0', '1').index('0')
end
