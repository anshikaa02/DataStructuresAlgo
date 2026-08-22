class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int original =n;  //n will change after n/10, so preserve it
        while (n>0){
            int digit= n%10;
            n=n/10;
            sum= sum+digit;
            product= product*digit;
            
        }
    
        if (original % (sum+product)== 0) return true;
        else return false;
    }
};