class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        char maxKey;
        unordered_map<char,int>::iterator it=m.begin();
        while(!m.empty())
        {
            it=m.begin();
            int max=INT_MIN;
            while(it!=m.end()){
                if(max<it->second){
                    maxKey=it->first;
                    max=it->second;
                }
                it++;
            }
            while(m[maxKey]!=0){
                ans.push_back(maxKey);
                m[maxKey]--;
            }
            m.erase(maxKey);
        }
        return ans;
    }
};