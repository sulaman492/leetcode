class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>nums2(nums.size());
        for(int i=0;i<nums.size();i++){
            int j=i+k;
            if(j>=nums.size())j=j%nums.size();
            nums2[j]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=nums2[i];
        }
    }
};