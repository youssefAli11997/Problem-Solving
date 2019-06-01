//link: https://app.codesignal.com/arcade/intro/level-12/s9qvXv4yTaWg8g4ma
String longestWord(String text) {
    String[] pureWords = text.replaceAll("[^a-zA-Z\\s]+", " ").split("\\s");
    int max = pureWords[0].length(), idx = 0;
    for(int i=1; i<pureWords.length; i++){
        if(pureWords[i].length() > max){
            max = pureWords[i].length();
            idx = i;
        }
    }
    return pureWords[idx];
}
