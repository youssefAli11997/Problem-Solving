# problem link : https://www.interviewbit.com/problems/reverse-the-string/
# gategory : Strings
class Solution:
    # @param A : string
    # @return string
    def reverseWords(self, A):
        arr = A.split()
        arr.reverse()
        return " ".join(arr)
