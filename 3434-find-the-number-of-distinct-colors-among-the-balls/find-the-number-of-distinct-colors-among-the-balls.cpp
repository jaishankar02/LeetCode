class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>m;
        // vector<int>v(limit+1,0);
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            if(mp[queries[i][0]]==0){
                mp[queries[i][0]]=queries[i][1];
                m[queries[i][1]]++;
            }
            else{
                if(m[mp[queries[i][0]]]==1){
                    m.erase(mp[queries[i][0]]);
                }
                else{
                    m[mp[queries[i][0]]]--;
                }
                mp[queries[i][0]]=queries[i][1];
                m[queries[i][1]]++;
            }
            ans.push_back(m.size());
        }
        return ans;
    }
};