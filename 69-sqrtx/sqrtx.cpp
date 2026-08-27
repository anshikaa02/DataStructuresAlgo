class Solution {
public:
    int mySqrt(int x) {
        int s=0;
        int e=x;
        int ans;
        while (s<=e){
            long long int mid= s+(e-s)/2;
            long long int product = mid*mid;
            if (product == x) return mid;
            if (product > x) e=mid-1;
            else {
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};