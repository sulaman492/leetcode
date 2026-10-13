class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(char c : s){
            if(isalnum(c)){
                result +=tolower(c);
            }
        }
        int i=0,j=result.size()-1;
        while(j>=i){
            if(result[i]!=result[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};