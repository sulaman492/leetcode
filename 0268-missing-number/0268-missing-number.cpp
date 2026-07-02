class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        bool ans=false;
        for(int i=0;i<n;i++){
            ans=false;
            for(int j=0;j<n;j++){
                if(i==nums[j]){
                    ans=true;
                    break;
                }
            }
            if(ans==false){
                return i;
            }
        }
        return n;
    }
};