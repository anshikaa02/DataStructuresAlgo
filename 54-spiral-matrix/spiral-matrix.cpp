class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m= matrix[0].size();
        vector<int> ans;
        int startrow=0, startcol=0, endrow=n-1, endcol= m-1;
        while (startrow <= endrow && startcol <=endcol){
        //start row
        if (startrow <= endrow){
        
            for (int i =startcol; i<= endcol; i++){
            ans.push_back(matrix[startrow][i]);
            
            }
            startrow++;
        }
        //end col
        
        for (int i=startrow; i<= endrow; i++){
            ans.push_back(matrix[i][endcol]);
            
        }
        endcol--;
        
        //end row
        if(startrow <= endrow){
            for (int i =endcol; i>=startcol ; i--){
                ans.push_back(matrix[endrow][i]);
                
            }
            endrow--;
        }
        //start col
        if (startcol <= endcol){
            for (int i=endrow; i>= startrow; i--){
                ans.push_back(matrix[i][startcol]);
                
            }
            startcol++;
        }
    }
    return ans;
    }
};