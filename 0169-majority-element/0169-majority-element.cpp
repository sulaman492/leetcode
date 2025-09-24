class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int size=nums.size();
     int count=0;
    int n;
     for(int i=0;i<size;i++)
     {
        for(int j=i;j<size;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count>(size/2))
        {
            n= nums[i];
        }
        count=0;
     }   
     return n;
    }
};