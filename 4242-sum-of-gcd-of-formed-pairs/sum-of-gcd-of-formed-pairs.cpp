class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n= nums.size();
        int maxi= INT_MIN;
        vector<int> prefixGcd;

        for (int i=0; i<n; i++){
            maxi=  max(nums[i], maxi);
            prefixGcd.push_back( __gcd(nums[i], maxi));
        }
        
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans=0;
        
        int i=0;
        int j= n-1;
        while(i<j){
                ans+=__gcd(prefixGcd[i], prefixGcd[j]);
                i++, j--;
        }
        return ans;
    }
};