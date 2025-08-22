class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int maxc=0,maxr=0,minc=INT_MAX,minr=INT_MAX;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                // cout<<grid[i][j]<<" ";
                if(grid[i][j]==1){
                    // cout<<i<<" "<<j<<endl;
                    minc=min(minc,j);
                    minr=min(minr,i);
                    maxc=max(maxc,j);
                    maxr=max(maxr,i);
                    // cout<<maxc<<" "<<maxr<<endl;
                }
            }
        }
        return (maxc-minc+1)*(maxr-minr+1);
    }
};