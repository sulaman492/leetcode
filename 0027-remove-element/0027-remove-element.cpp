class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int c=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                for(int j=i;j<nums.size()-1;j++)
                {
                    for(int k=j+1;k<nums.size();k++)
                    {
                        if(nums[k]!=val)
                        {
                            c=k;
                            flag=true;
                            break;
                        }
                    }
                    if(flag==true)
                    {
                        swap(nums[c],nums[j]);
                    }
                }
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                break;
            }
            count++;
        }
        return count;        
    }
};