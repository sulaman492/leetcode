class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mpS;
        unordered_map<char,int>mpT;
        for(char c:s){
            mpS[c]++;
        }
        for(char c:t){
            mpT[c]++;
        }
        if(mpS==mpT)return true;
        return false;
    }
};