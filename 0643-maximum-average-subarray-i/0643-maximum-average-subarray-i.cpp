class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        double sum=0, maxSum=INT_MIN;
        while(j<nums.size()){
            sum=sum+nums[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                maxSum=max(sum,maxSum);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxSum/k;
    }
};