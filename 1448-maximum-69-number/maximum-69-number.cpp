class Solution {
public:
    int maximum69Number (int num) {
        int s=3;
        int n=num;
        int ans=n;
        while(num){
            int a=num%10;
            if(a==6){
                ans=max(ans,n+s);
            }
            num=num/10;
            s=s*10;
        }
        return ans;
    }
};