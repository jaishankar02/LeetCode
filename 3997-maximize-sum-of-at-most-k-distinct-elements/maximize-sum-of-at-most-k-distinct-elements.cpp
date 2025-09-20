class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        // vector<int>ans;
        unordered_set<int>s;
        sort(nums.begin(),nums.end());
        int j=nums.size();
        while(s.size()!=k&& j!=0){
            s.insert(nums[j-1]);
            j--;
        }
        vector<int>ans(s.begin(),s.end());
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        return ans;
    }
};