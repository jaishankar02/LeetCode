class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<n;i++){
            int j=0;
            int k=i;
            int len=0;
            while(k<n && j<n){
                cout<<grid[k][j];
                j++;
                k++;
                len++;
            }
            j=0;
            k=i;
            for(int a=1;a<len;a++){
                int key=grid[k+a][j+a];
                int b = a - 1;
                while (b >= 0 && grid[k + b][j + b] < key) {
                    grid[k + b + 1][j + b + 1] = grid[k + b][j + b];
                    b--;
                }
                grid[k + b + 1][j + b + 1] = key;
            }
            if(i!=0){
                j=0;
            k=i;
            for(int a=1;a<len;a++){
                int key=grid[j+a][k+a];
                int b = a - 1;
                while (b >= 0 && grid[j + b][k + b] > key) {
                    grid[j + b + 1][k + b + 1] = grid[j + b][k + b];
                    b--;
                }
                grid[j + b + 1][k + b + 1] = key;
            }
            }
            
        }
        return grid;
    }
};