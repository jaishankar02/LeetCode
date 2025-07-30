class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxele=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(maxele<nums[i]){
                maxele=nums[i];
            }
        }
        int ans=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxele){
                count++;
                ans=max(ans,count);
            }
            else count=0;
        }
        return ans;
    }
};