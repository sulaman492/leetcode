class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        vector<int>v;
        unordered_map<int,int>map;
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.empty()){
                map[nums2[i]]=-1;
            }
            else if(s.top()>nums2[i]){
                map[nums2[i]]=s.top();
            }
            else{
                while(!s.empty() && s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.empty()){
                    map[nums2[i]]=-1;    
                }
                else{
                    map[nums2[i]]=s.top();
                }
            }
            s.push(nums2[i]);
        }    
        for(int i=0;i<nums1.size();i++){
            v.push_back(map[nums1[i]]);
        }
        return v;
    }
};