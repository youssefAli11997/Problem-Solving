// link: https://app.codesignal.com/arcade/intro/level-12/uRWu6K8E7uLi3Qtvx/solutions

int[][] spiralNumbers(int n) {
    int[][] mat = new int[n][n];
    
    fill(mat, n, 1, 0);
    
    return mat;
}

void fill(int[][] mat, int n, int curr, int rc) {
    if(n <= 0) return;
    //System.out.println("filling for n = " + n);

    // up
    for(int i=rc; i<rc+n; i++)
        mat[rc][i] = curr++;
    // right
    for(int i=rc+1; i<rc+n; i++)
        mat[i][rc+n-1] = curr++;
    //down
    for(int i=rc+n-2; i>=rc; i--)
        mat[rc+n-1][i] = curr++;
    // left
    for(int i=rc+n-2; i>=rc+1; i--)
        mat[i][rc] = curr++;
    
    //printmat(mat);

    fill(mat, n-2, curr, rc+1);
}

void printmat(int[][] mat) {
    int n = mat.length;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            System.out.print(mat[i][j] + " ");
        }
        System.out.println();
    }
}
