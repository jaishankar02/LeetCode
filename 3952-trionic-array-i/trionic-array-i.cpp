class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int i=1;
        bool flag1=false;
        while(i<nums.size()&&nums[i]>nums[i-1]){
            flag1=true;
            i++;
        }
        int j=nums.size()-2;
        bool flag2=false;
        while( j>=0&&nums[j]<nums[j+1]){ 
            flag2=true;
            j--;
        }
        bool flag=false;
        for(int k=i;k<=j+1;k++){
            if(nums[k]>=nums[k-1])return false;
            else flag=true; 
        }
        if(flag&&flag1&&flag2) return true;
        return false;
    }
};