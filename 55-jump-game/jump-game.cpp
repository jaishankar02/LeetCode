class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int goal=n-1;
        bool flag=false;
        if(n==1){
            return true;
        }
        for(int i=n-2;i>=0;i--){
            if(i+nums[i]<goal){
                flag=false;
            }
            else{
                goal=i;
                flag=true;
            }
        }
        return flag?true:false;
    }
};