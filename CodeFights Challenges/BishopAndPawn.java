//link: https://codefights.com/arcade/intro/level-9/r9azLYp2BDZPyzaG2/
boolean bishopAndPawn(String bishop, String pawn) {
    if(bishop.charAt(0) - pawn.charAt(0) == bishop.charAt(1) - pawn.charAt(1) ||
       bishop.charAt(0) - pawn.charAt(0) == -bishop.charAt(1) + pawn.charAt(1))
        return true;
    return false;
}
