class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
        }
        for(int i=0;i<nums.size();i++){
            int RightSum=nums[nums.size()-1]-nums[i];
            int leftSum;
            if(i==0)leftSum=0;
            else leftSum=nums[i-1];
            if(leftSum==RightSum)return i;
        }
        return -1;
    }
};