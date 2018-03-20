 /*
     * Complete the breakingRecords function below.
     */
    static int[] breakingRecords(int[] score) {
        int min = score[0], max = score[0];
        int[] ans = new int[2];
        
        for(int i=0; i<score.length; i++){
            if(score[i] < min){
                ans[1]++;
                min = score[i];
            }
            if(score[i] > max){
                ans[0]++;
                max = score[i];
            }
        }
        return ans;
    }
