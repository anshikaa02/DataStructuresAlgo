class Solution {
public:
    bool ispalindrome (int i, int j, string s){
        while (i<j){
               if (s[i]!= s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
    bool validPalindrome(string s) {
    int i=0;
    int j= s.length()-1;
    while (i<j){
        if(s[i]== s[j]){
            i++;
            j--;
        }
        else{
            bool ans1= ispalindrome(i+1, j, s);
            bool ans2= ispalindrome(i, j-1, s);
            return ans1 || ans2;
        }
    }
    return true;
   
    }
};