class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //first we will transpose the matrix
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //then we will reverse each row
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }  
    }
};