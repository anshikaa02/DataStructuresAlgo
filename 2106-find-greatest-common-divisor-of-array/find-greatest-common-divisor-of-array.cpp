class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n= nums.size();
        int maxi= INT_MIN;
        int mini= INT_MAX;
        for (int i=0; i<n; i++){
            if (nums[i]> maxi)
                maxi= nums[i];

            if (nums[i]< mini){
                mini= nums[i];
            }

        }
        int ans= __gcd(mini, maxi);
        return ans;
    }
};