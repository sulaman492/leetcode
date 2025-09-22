class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> newnums;
        int j=0;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            j=i;
            while(j>=0)
            {
                sum=sum+nums[j];
                j--;
            }
            newnums.push_back(sum);
            sum=0;
            
        }
        return newnums;
    }
};