class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1;
        int sum2;
        int n=nums.size();
        sum1=(n*(n+1)/2);
        sum2=0;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
        }
        return sum1-sum2;
    }
};