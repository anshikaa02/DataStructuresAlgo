class Solution {
public:
    int gcdOfOddEvenSums(int n){
        int sumOdd =0; 
        int sumEven =0;
        if (n==1) return 1;
        for (int i =0; i<n; i++){
            
            sumOdd += 2*i-1 ;
            sumEven+= 2* i;

        }
        int ans= __gcd(sumEven, sumOdd);
        return ans;
    }
};