class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(flag==false){
                if(nums[i]==0){
                    count++;
                    flag=!flag;
                }
            }
            else{
                if(nums[i]==1){
                    count++;
                    flag=!flag;
                }
            }
        }
        return count;
    }
};