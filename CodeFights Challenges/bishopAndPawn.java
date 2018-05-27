boolean bishopAndPawn(String bishop, String pawn) {
    if(bishop.charAt(0) - pawn.charAt(0) == bishop.charAt(1) - pawn.charAt(1) ||
       bishop.charAt(0) - pawn.charAt(0) == -bishop.charAt(1) + pawn.charAt(1))
        return true;
    return false;
}
