class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        bool flag;
        if(t.size()==0)flag=false;
        if(s.size()==0)flag=true;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
                if(i==s.size())return true;
            }
            else{
                j++;
                if(j==t.size())return false;
            }
        }
        return flag;
    }
};