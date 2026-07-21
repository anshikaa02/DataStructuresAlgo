class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        
        vector<int> sorted(n);
        for(int i=0; i<n; i++){
        sorted[i]= nums[i]*nums[i];
        }
        sort(sorted.begin(), sorted.end());
        return sorted;
        
    }
};