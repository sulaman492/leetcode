class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> newnums;
       vector<int> finalnums; 
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    newnums.push_back(nums1[i]);
                }
            }
        }
        int count=0;
        for(int i=0;i<newnums.size();i++)
        {
            for(int j=i+1;j<newnums.size();j++)
            {
                if(newnums[i]==newnums[j])
                {
                    count++;
                }
            }
            if(count==0)
            {
                finalnums.push_back(newnums[i]);
            }
            count=0;
        }
        return finalnums;
    }
};