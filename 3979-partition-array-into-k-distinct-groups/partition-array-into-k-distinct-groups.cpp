class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        long long sum=0, maxele=0;
        for(auto it:mp){
            if(it.second>maxele){
                sum+=maxele;
                maxele=it.second;
                
            }
            else sum+=it.second;

            // cout<<sum<<endl;
        }
        cout<<sum<<endl;
        long long s=sum-(maxele*(k-1));
        cout<<s<<endl;
        if(s<0) return false;
        if(s%k==0) return true;
        else return false;
    }
};