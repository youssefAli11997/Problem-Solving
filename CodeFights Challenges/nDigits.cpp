//link: https://codefights.com/challenge/JFsYQuCRvwazY6kXw/
//problem statement: How many digits does the number a^n contain?
long long nDigits(long long n, long long a) {
    return n * log10(a) + 1;
}
