class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int>s;
        int cursum=0,maxsum=0;
        int maxele=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxele)maxele=nums[i];
            if(nums[i]>0){
                if(s.find(nums[i])==s.end()){
                    cursum+=nums[i];
                    s.insert(nums[i]);
                }
                maxsum=max(cursum,maxsum);
            }
        }
        return (maxsum==0?maxele:maxsum);
    }
};