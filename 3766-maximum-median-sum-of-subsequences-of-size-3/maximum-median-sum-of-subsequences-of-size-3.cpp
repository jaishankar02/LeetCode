class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long ans=0;
        int f=0,l=nums.size()-2;
        while(f<l){
            ans+=nums[l];
            f++;
            l-=2;
        }
        return ans;
    }
};