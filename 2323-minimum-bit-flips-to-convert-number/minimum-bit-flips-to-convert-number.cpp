class Solution {
public:
    long long minBitFlips(int start, int goal) {
        long long c=start^goal;
        long long count=0;
        while(c){
            if(c&1==1){
                count++;
            }
            c=c>>1;
            // cout<<c<<endl;
        }
        return count;
    }
};