/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>m;
        for(int i=0;i<descriptions.size();i++){
            if(m.find(descriptions[i][0])==m.end()){
                TreeNode* parent=new TreeNode(descriptions[i][0]);
                m[descriptions[i][0]]=parent;
            }
            if(m.find(descriptions[i][1])==m.end()){
                TreeNode* child= new TreeNode(descriptions[i][1]);
                m[descriptions[i][1]]=child;
            }
            if(descriptions[i][2]==1){
                m[descriptions[i][0]]->left=m[descriptions[i][1]];
            }
            else
                m[descriptions[i][0]]->right=m[descriptions[i][1]];
        }
        for(int i=0;i<descriptions.size();i++){
            m.erase(descriptions[i][1]);
        }
        auto it=m.begin();
        // cout<<<<endl;
        return it->second;
    }
};