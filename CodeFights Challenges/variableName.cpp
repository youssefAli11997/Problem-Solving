//problem link : https://codefights.com/arcade/intro/level-6/6Wv4WsrsMJ8Y2Fwno/
bool variableName(string name) {
    if(!isalpha(name[0]) && name[0] != '_') return false;
    for(int i=1; i<name.size(); i++)
        if(!isalnum(name[i]) && name[i] != '_') return false;
    return true;
}
