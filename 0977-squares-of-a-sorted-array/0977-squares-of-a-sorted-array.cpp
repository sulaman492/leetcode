class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;
        int i=0,j=nums.size()-1;
        while(j>=i){
            if(pow(nums[i],2)<pow(nums[j],2)){
                v.push_back(pow(nums[j],2));
                j--;
            }
            else{
                v.push_back(pow(nums[i],2));
                i++;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};