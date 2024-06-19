class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ans=0;
        long long count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                count++;
            }
            else{
                cout<<count<<endl;
                count++;
                ans+=(count*(count+1))/2;
                count=0;
            }
        }
        count++;
        ans+=(count*(count+1))/2;
        return ans;
    }
};