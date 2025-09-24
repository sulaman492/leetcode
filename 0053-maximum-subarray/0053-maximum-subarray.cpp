class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=INT_MIN;
        int currentSum;
        for(int start=0;start<nums.size();start++)
        {
            currentSum=0;
            for(int end=start;end<nums.size();end++)
            {
                currentSum=currentSum+nums[end];
                maxSum=max(currentSum,maxSum);
            }
        }
        return maxSum;
    }
};