class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0,end=nums.size()-1;
        int min=0;
        while(st<=end){
            if(nums[st] <= nums[end])
                return nums[st];
            int mid=st+(end-st)/2;
            int prev=(mid-1+nums.size())%nums.size();
            int next=(mid+1)%nums.size();
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]){
                return nums[mid];
            }
            else if(nums[st] <= nums[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
       }
        return min;
    }
};