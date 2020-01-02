class Solution {
    public int minDominoRotations(int[] A, int[] B) {
        int[] freq = new int[6];
        int minRots = 1000000;
        
        for(int i=0; i<A.length; i++){
            freq[A[i]-1]++;
            if(A[i] != B[i]){
                freq[B[i]-1]++;
            }
        }
        
        for(int j=0; j<freq.length; j++){
            if(freq[j] == A.length){
                int A_rots = 0, B_rots = 0;
                for(int i=0; i<A.length; i++)
                    if(A[i] != j+1)
                        A_rots++;
                for(int i=0; i<B.length; i++)
                    if(B[i] != j+1)
                        B_rots++;
                minRots = Math.min(minRots, Math.min(A_rots, B_rots));
            }
        }
        
        return minRots == 1000000? -1 : minRots;
    }
}
