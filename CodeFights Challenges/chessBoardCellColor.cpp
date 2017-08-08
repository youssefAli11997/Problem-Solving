// problem link : https://codefights.com/arcade/intro/level-6/t97bpjfrMDZH8GJhi
bool chessBoardCellColor(string cell1, string cell2) {
    bool col1 = (cell1[0]-'A') % 2 ^ (cell1[1]-'0') % 2;
    bool col2 = (cell2[0]-'A') % 2 ^ (cell2[1]-'0') % 2;
    return col1 == col2;
}
