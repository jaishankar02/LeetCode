class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && i<=nums.size()-3){
                nums[i]=1-nums[i];
                nums[i+1]=1-nums[i+1];
                nums[i+2]=1-nums[i+2];
                count++;
            }
        }
        int count0=0;
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
            if(nums[i]==0){
                count0++;
            }
        }
        cout<<endl;
        return count0!=0?-1:count;
    }
};