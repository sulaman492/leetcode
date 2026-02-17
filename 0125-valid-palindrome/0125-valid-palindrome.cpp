class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        // bool isPalindrome=true;
        int j=str.size();
        for(int i=0;i<str.size();i++)
        {
            j--;
            if(str[i]!=str[j])
            {
                return false;
            }
        }
        return true;

    }
};