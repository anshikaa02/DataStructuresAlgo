class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map< char, int> map;
        for (int i=0; i<s.size(); i++){
            char ch= s[i];
            map[ch]++;
        }
        for (int i=0; i<t.size(); i++){
            char ch= t[i];
            map[ch]--;
        }
        for (char ch='a'; ch<='z'; ch++){

        if (map[ch]!=0) return false;
        }
        return true;
        
    }
};