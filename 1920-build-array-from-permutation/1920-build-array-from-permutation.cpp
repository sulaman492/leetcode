class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> newnums;
        for(int i=0;i<nums.size();i++)
        {
            newnums.push_back(nums[nums[i]]);
        }
        return newnums;
    }
};