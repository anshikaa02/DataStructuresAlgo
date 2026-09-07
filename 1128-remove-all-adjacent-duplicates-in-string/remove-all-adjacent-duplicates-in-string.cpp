class Solution {
public:
    string removeDuplicates(string s) {
        //make a string ans, iterate over s, push it in ans
        //case1, if ans is empty or ch!= rightmost of ans-> push
        //case 2, if ch= rightmost of ans, pop the last char of ans

        string ans= "";
        for (int i=0; i<s.length(); i++){
            char ch=s[i];
            if (ans.empty()) ans.push_back(ch);
            else if (ch!= ans.back()) ans.push_back(ch);
            else ans.pop_back();
        }
        return ans;
    }
};