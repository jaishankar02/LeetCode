class Solution {
public:
    void solve(string s,int c,int o,vector<string>&ans){
        if(c==0){
            while(o){
                s="("+s;
                o--;
            }
            ans.push_back(s);
            return;
        }
        if(o==0){
            while(c){
                s=")"+s;
                c--;
            }
            ans.push_back(s);
            return;
        }
        if(c!=o){
            solve("("+s,c,o-1,ans);
        }
        solve(")"+s,c-1,o,ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int c=n,o=n;
        // vector<vector<string>>v(o,vector<int>(c,""));
        solve("",c,o,ans);
        return ans;
    }
};