class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        vector<int>result;
        int firstOccurrence=-1,lastOccurrence=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==nums[mid]){
                end=mid-1;
                firstOccurrence=mid;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        st=0,end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target==nums[mid]){
                st=mid+1;
                lastOccurrence=mid;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        result.push_back(firstOccurrence);
        result.push_back(lastOccurrence);
        return result;
    }
};