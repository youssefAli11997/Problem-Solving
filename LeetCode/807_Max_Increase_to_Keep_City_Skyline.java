class Solution {
    public int maxIncreaseKeepingSkyline(int[][] grid) {
        int n = grid.length;
        int[] skylineTop = new int[n];
        int[] skylineRight = new int[n];
        
        for(int i=0; i<n; i++){
            int max = -1;
            for(int j=0; j<n; j++)
                if(grid[i][j] > max)
                    max = grid[i][j];
            skylineRight[i] = max;
        }
        for(int i=0; i<n; i++){
            int max = -1;
            for(int j=0; j<n; j++)
                if(grid[j][i] > max)
                    max = grid[j][i];
            skylineTop[i] = max;
        }
        
        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int newVal = Math.min(skylineRight[i], skylineTop[j]);
                sum += newVal - grid[i][j];
            }
        }
        
        return sum;
    }
}
