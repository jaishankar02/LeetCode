class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int count=0;
        sort(points.begin(),points.end());
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                bool flag=true;
                if(points[i][0]==points[j][0]){
                    for(int k=i+1;k<j;i++){
                        if(points[k][0]==points[i][0]){
                            flag=false;
                            break;
                        }
                    }
                    if(flag){
                        count++;
                    }
                }
                else if(points[i][1]>=points[j][1]){
                    for(int k=0;k<points.size();k++){
                        if(points[k][1]<=points[i][1] && points[k][1]>=points[j][1] && points[k][0]>=points[i][0] && points[k][0]<=points[j][0] && k!=i && k!=j){
                            flag=false;
                            break;
                        }
                    }
                    if(flag){
                        count++;
                    }
                    
                }
                
            }
        }
        return count;
    }
};