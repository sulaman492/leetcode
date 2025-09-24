class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int currentSum;
        for(int i=0;i<nums.size();i++)
        {
            currentSum=0;
            for(int j=i;j<nums.size();j++)
            {
                currentSum+=nums[j];
            if(currentSum==k)
            {
                count++;
            }
            }
        }
        return count;
    }
};