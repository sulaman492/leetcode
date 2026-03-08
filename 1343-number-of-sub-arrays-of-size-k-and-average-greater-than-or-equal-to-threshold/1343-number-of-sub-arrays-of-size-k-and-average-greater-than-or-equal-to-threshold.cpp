class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0,sum=0,average=0,count=0;
        while(j<arr.size()){
            sum=sum+arr[j];
            if(j-i+1 < k){
                j++;
            }
            else if(j-i+1 == k){
                average=sum/k;
                if(average>=threshold)count++;
                sum=sum-arr[i];
                i++;
                j++;
            }
        }
        return count;
    }
};