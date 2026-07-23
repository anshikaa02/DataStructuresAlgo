class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (nums[i]==nums[j]) count++;
                
            }
            if (count > n/2) return nums[i];
            count=0; //reset for next iteration or option 2: declare count inside for loop
        }
        
        return -1;
    }
};