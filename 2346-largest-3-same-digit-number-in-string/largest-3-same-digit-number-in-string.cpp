class Solution {
public:
    string largestGoodInteger(string num) {
        int cursum=0,maxsum=0;
        string ans="";
        // cout<<num.size()<<endl;
        for(int i=2;i<num.size();i++){
            if(num[i]==num[i-1]&& num[i]==num[i-2]){
                int a=int(num[i])-'0';
                // cout<<int(num[i])<<endl;
                // int a=1;
                // cout<<num[i]<<endl;
                cursum=a*100+a*10+a;
                // cout<<cursum<<endl;
                if(cursum>=maxsum){
                    maxsum=cursum;
                    // ans=num[i]+num[i]+num[i];
                    ans="";
                    ans+=num[i];
                    ans+=num[i-1];
                    ans+=num[i-2];
            }
        }
        // for(int i=0;i<num.size();i++){
        //     cout<<num[i]<<endl;
        //     if(num[i]==num[i-1]&& num[i]==num[i-2]){
        //         int a=int(num[i]);
        //         int a=1;
        //         cout<<num[i]<<endl;
        //         cursum=a*100+a*10+a;
        //         cout<<cursum<<endl;
        //         if(cursum>maxsum){
        //             maxsum=cursum;
        //             ans=num[i]+num[i]+num[i];
        //         }
        //     }
        // }
        
    }
    return ans;
    }
};