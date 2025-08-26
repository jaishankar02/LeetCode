class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxele=0;
        for(auto it:mp){
            if(it.second>maxele){
                maxele=it.second;
            }
        }
        if(nums.size()%k!=0) return false;
        int holes=nums.size()/k;
        if(maxele>holes) return false;
        return true;
    }
};