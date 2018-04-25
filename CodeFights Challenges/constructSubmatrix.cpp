/*

Given a matrix (i.e. an array of arrays), find its submatrix obtained by deleting the specified rows and columns.

Example

For

matrix = [[1, 0, 0, 2], 
          [0, 5, 0, 1], 
          [0, 0, 3, 5]]

rowsToDelete = [1] and columnsToDelete = [0, 2], the output should be

constructSubmatrix(matrix, rowsToDelete, columnsToDelete) = [[0, 2],
                                                             [0, 5]]

*/

vector<vector<int>> constructSubmatrix(vector<vector<int>> matrix, vector<int> rowsToDelete, vector<int> columnsToDelete) {
    vector<vector<int>> ans;
    
    for(int i=0; i<matrix.size(); i++){
        if(is_removed(rowsToDelete, i))
            continue;
        
        ans.push_back(vector<int>());
        for(int j=0; j<matrix[0].size(); j++){
            if(is_removed(columnsToDelete, j))
                continue;
            
            ans[ans.size()-1].push_back(matrix[i][j]);
        }
    }
    
    return ans;
}

bool is_removed(vector<int> rmv, int ele){
    for(int i=0; i<rmv.size(); i++)
        if(ele == rmv[i])
            return true;
    return false;
}
