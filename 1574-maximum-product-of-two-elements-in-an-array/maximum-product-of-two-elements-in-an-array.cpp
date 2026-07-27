class Solution {
public:
    int maxProduct(vector<int>& nums) {

        
        vector <int> sorted =nums;
       
        sort(sorted.begin(), sorted.end());
        int m= sorted.size();
        return (sorted[m-1]-1)* (sorted[m-2]-1);
    }
};