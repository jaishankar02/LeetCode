class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int avg=0;
        for(int i=0;i<nums.size();i++){
            avg+=nums[i];
        }
        cout<<avg<<endl;
        avg/=int(nums.size());
        cout<<avg;
        for(int i=avg+1;i<1000;i++){
            if(s.find(i)==s.end() && i>0) return i;
        }

        return 0;
    }
};