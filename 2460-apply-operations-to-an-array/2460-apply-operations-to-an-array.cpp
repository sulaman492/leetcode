class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        int k=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=0){
                nums[k]=nums[j];
                k++;
            }
        }
        for(k;k<nums.size();k++)
        {
            nums[k]=0;
        }
        return nums;
    }
};