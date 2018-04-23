char firstDigit(String inputString) {
    for(int i=0; i<inputString.length(); i++){
        if(inputString.charAt(i) >= '0' && inputString.charAt(i) <= '9'){
            return inputString.charAt(i);
        }
    }
    return ' ';
}
