class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n= matrix.size(); //rows
       int m= matrix[0].size(); //col
       //binary search
       int s= 0; 
       int e= n * m -1;
    
       
       while (s<=e){
        int mid= s+(e-s)/2;
        //index of mid as 1d
        int midval= matrix[mid / m][mid % m];
        if (midval== target) return true;
        else if (midval> target) e= mid-1;
        else s= mid+1;
       } 
       return false;
    }
};