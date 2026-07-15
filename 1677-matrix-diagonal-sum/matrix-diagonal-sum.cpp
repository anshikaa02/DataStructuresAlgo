class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        // diagonal 1
        int sum1 =0, sum2=0;
        for (int i=0; i<n; i++){
                sum1 += mat[i][i];
                sum2+= mat[i][n-i-1]; // diagonal2
            }
        // remove double;
        int sum= sum1+ sum2;

        if (n%2!=0) sum-= mat[n/2][n/2];
        return sum;
    }
};