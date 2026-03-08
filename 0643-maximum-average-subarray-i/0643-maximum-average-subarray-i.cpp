class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        float sum=0, average=0,maxAverage=-FLT_MAX;
        while(j<nums.size()){
            sum=sum+nums[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                average=sum/k;
                maxAverage=max(average,maxAverage);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxAverage;
    }
};