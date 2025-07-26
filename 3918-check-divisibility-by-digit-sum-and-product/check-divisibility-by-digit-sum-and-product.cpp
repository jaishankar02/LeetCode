class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n;
        int len=log10(n);
        int dsum=0,dpro=1;
        for(int i=0;i<=len;i++){
            dsum+=(k%10);
            dpro*=(k%10);
            // cout<<dpro<<endl;
            k/=10;
        }
        // cout<<dsum<<" "<<dpro<<endl;
        if(n%(dsum+dpro)==0){
            return true;
        }
        return false;
    }
};