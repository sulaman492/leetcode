class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int number=0;
        int num;
        for(int i=0;i<nums.size();i++)
        {
            num=nums[i];
            while(num>0)
            {
                num=num/10;
                count++;
            }
            if(count%2==0)
            {
                number++;
            }
            count=0;
        }
    return number;
    }
};