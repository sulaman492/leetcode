class Solution {
public:
    string reverseWords(string s) {
        stack<string>reverse;
        int i=0;
        string str2;
        while(s[i]!='\0'){
            while(s[i]!=' ' && s[i]!='\0'){
                str2.push_back(s[i]);
                i++;
            }
            if(!str2.empty()){
                reverse.push(str2);
            }
            if(s[i]!='\0'){
                i++;
            }
            str2="";
            str2.clear();
        }
        str2="";
        str2.clear();
        while(!reverse.empty()){
            str2+=reverse.top();
            reverse.pop();
            if(!reverse.empty()){
                str2+=" ";
            }
        }
        return str2;
    }
};