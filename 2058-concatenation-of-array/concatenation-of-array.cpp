class Solution {
public:
//1929
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> newarray;
        int j=0;
        for(int i=0;i<=(nums.size()*2)-1;i++)
        {
            if(j==nums.size()-1) 
            {
            newarray.push_back(nums[j]);
            j=0;
            continue;
            };
            newarray.push_back(nums[j]);
            j++;
        }
    return newarray;
    }

};