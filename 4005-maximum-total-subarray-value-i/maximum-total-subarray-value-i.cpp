class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxele=0;
        long long minele=LLONG_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxele)maxele=nums[i];
            if(nums[i]<minele)minele=nums[i];
        }
        return (maxele-minele)*k;
    }
};