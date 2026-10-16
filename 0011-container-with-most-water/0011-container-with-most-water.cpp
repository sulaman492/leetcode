class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,ans=-1,result;
        while(j>i){
            if(height[i]<height[j]){
                result=height[i]*(j-i);
                i++;
            }
            else{
                result=height[j]*(j-i);
                j--;
            }
            ans=max(ans,result);
        }
        return ans;
    }
};