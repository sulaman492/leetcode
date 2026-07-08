class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>v;
        stack<pair<int,int>>s;
        for(int i=temperatures.size()-1;i>=0;i--){
            if(s.empty()){
                v.push_back(0);
            }
            else if(s.top().first>temperatures[i]){
                v.push_back(s.top().second-i);
            }
            else{
                while(!s.empty() && s.top().first<=temperatures[i]){
                    s.pop();
                }
                if(s.empty()){
                    v.push_back(0);
                }
                else {
                    v.push_back(s.top().second-i);
                }
            }
            s.push({temperatures[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
};