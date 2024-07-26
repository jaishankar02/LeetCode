class Solution {
public:
    int solve(int m,int n,int a,int b, vector<vector<int>>&v){
        if(m==a)return 0;
        if(n==b)return 0;
        if(m==(a-1)&& (n==(b-1)))return 1;
        if(v[m][n]!=-1)return v[m][n];
        return v[m][n]=solve(m+1,n,a,b,v)+solve(m,n+1,a,b,v);

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n,-1));
       return solve(0,0,m,n,v);
    }
};