// problem link: https://app.codesignal.com/arcade/intro/level-3/9DgaPsE2a7M6M2Hu6/description

String reverseInParentheses(String s) {
    while(hasPars(s)){
        s = dePars(s);
    }
    
    return s;
}

String reverse(String s, int k, int j) {
    String r = "";
    for(int i=k; i<j; i++){
        r = s.charAt(i) + r;
    }
    return r;
}

boolean hasPars(String s){
    for(int i=0; i<s.length(); i++)
        if(s.charAt(i) == '(')
            return true;
    return false;
}

String dePars(String s){
    int closedPos = -1, openPos = -1;
    for(int i=s.length()-1; i>=0; i--){
        if(openPos == -1 || closedPos == -1){
            if(s.charAt(i) == ')')
                closedPos = i;
            if(s.charAt(i) == '(')
                openPos = i;
        }
        else{
            s = s.substring(0, openPos) + reverse(s, openPos+1, closedPos) + s.substring(closedPos+1);
            openPos = -1;
            closedPos = -1;
        }
    }
    
    if(openPos != -1 && closedPos != -1){
        s = (openPos>0 ? s.substring(0, openPos) : "")
            + reverse(s, openPos+1, closedPos) + s.substring(closedPos+1);
        openPos = -1;
        closedPos = -1;
    }
    
    return s;
}
