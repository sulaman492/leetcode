class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[k] && i!=k){
                return true;
            }
            if(i==nums.size()-1){
                if(k==nums.size()){
                    break;
                }
                else{
                    k++;
                }
            }
        }
        return false;
    }
};