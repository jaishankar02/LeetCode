class Solution {
public:
    int solve(int a,int b,vector<vector<int>>&obstacleGrid,vector<vector<int>>&v,int m, int n){
        if(a==m)return 0;
        if(b==n)return 0;
        if(obstacleGrid[a][b]==1)return 0;
        if(v[a][b]!=-1)return v[a][b];
        if(a==(m-1)&& b==(n-1))return 1;
        return v[a][b]=(solve(a+1,b,obstacleGrid,v,m,n)+solve(a,b+1,obstacleGrid,v,m,n));
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>v(m,vector<int>(n,-1));
        return solve(0,0,obstacleGrid,v,m,n);
    }
};