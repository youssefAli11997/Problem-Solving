//link: https://codefights.com/arcade/intro/level-9/r9azLYp2BDZPyzaG2/
String longestDigitsPrefix(String inputString) {
    if(inputString.length() > 0 && inputString.charAt(0) >= '0' && inputString.charAt(0) <= '9')
        return inputString.charAt(0) + longestDigitsPrefix(inputString.substring(1));
    return "";
}
