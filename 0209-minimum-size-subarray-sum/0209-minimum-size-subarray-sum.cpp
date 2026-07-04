class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        double sum=0;
        int minSize=INT_MAX;
        while(j<nums.size()){
            sum=sum+nums[j];
            if(sum<target)j++;
            else if(sum>=target){
                minSize=min(minSize,j-i+1);
                while(sum>=target){
                    sum=sum-nums[i];
                    i++;
                    if(sum>=target){minSize=min(minSize,j-i+1);}
                }
                j++;
            }
        }
        if(minSize!=INT_MAX)return minSize;
        else return 0;
    }
};