class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>suffix(nums.size());
        vector<int>prefix(nums.size());
        prefix[0]=1;
        for(int i=1;i<nums.size();i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        suffix[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=prefix[i]*suffix[i];
        }
        return nums;
        // vector<int>nums2;
        // for(int i=0;i<nums.size();i++){
        //     int f=1;
        //     for(int j=0;j<nums.size();j++){
        //         if(i!=j){
        //             f=f*nums[j];
        //         }
        //     }
        //     nums2.push_back(f);
        // }
        // return nums2;

    }
};