class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    int i = 0;
    bool flag = true;
    while (s[i] != '\0')
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        if (s[i] == ')' || s[i]=='}'||s[i]==']')
        {
            if(st.empty()){
                flag=false;
                break;
            }
            if ((s[i] == ')' && st.top()=='(') || (s[i] == '}' && st.top()=='{') || (s[i] == ']' && st.top()=='['))
            {
                flag = true;
                st.pop();
            }
            else
            {
                flag = false;
            }
        }
        i++;
        if(flag==false){
            break;
        }
    }
    if(!st.empty()){
        flag=false;
    }
    return flag;
    }
};