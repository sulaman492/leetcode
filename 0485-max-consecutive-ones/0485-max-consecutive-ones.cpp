class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOne=-1;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                if(count>maxOne){
                    maxOne=count;
                }
                count=0;
            }
        }
        if(count>maxOne){
                    maxOne=count;
                }
        return maxOne;
    }
};