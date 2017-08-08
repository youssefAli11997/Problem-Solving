// problem link : https://codefights.com/arcade/intro/level-6/PWLT8GBrv9xXy4Dui/

string alphabeticShift(string inputString) {
    for(int i=0; i<inputString.size(); i++)
        if(inputString[i] == 'z') inputString[i] = 'a';
        else inputString[i]++;
    return inputString;
}
