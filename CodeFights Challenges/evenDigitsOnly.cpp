// problem link : https://codefights.com/arcade/intro/level-6/6cmcmszJQr6GQzRwW/
bool evenDigitsOnly(int n) {
    if(n == 0) return true;
    return (n % 10 % 2 == 0) && evenDigitsOnly(n / 10);
}
