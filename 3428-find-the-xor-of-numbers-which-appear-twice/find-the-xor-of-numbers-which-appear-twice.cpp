class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==2){
                ans^=it.first;
            }
        }
        return ans;
    }
};