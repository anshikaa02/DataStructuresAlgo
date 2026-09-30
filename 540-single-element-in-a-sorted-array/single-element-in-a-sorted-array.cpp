class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size()-1;
        if (nums.size() == 1)
            return nums[0];
        int i=0;
        int j=1;
        while(nums[i]== nums[j]){
            i+=2;
            j+=2;
            
        }
        return nums[i];
    }
};