class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>v(10,0);
        while(n){
            int a=n%10;
            v[a]++;
            n=n/10;
        }
        // for(int i=0;i<10;i++){
        //     cout<<v[i]<<endl;
        // }
        int sf=INT_MAX;
        int ans;
        for(int i=0;i<10;i++){
            if(sf>v[i] && v[i]>0){
                sf=v[i];
                ans=i;
            }
        }
        return ans;
    }
};