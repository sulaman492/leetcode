class Solution {
public:
    int firstUniqChar(string s) {
        int idx=-1,count=0;
        int i=0,k=0;
        char ch;
        while(s[i]!='\0'){
            ch=s[i];
            while(s[k]!='\0'){
                if(s[k]==s[i] && k!=i){
                    count++;
                }
                k++;
            }
            if(count==0){
                return i;
            }
            count=0;
            i++;
            k=0;
        }
        return -1;
    }
};