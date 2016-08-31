/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        string new_str = "";
        search(root, new_str, paths);
        return paths;
    }
    
    void search(TreeNode* root, string new_str, vector<string> &paths){
        if (!root){return;}
        if (!root->right && !root->left){  //没有左右子树时将new_str压入vector
            
            char a[10]; 
            sprintf(a, "%d", root->val);  // int --> char*
            string str(a);                // char* --> string
            new_str += a;
            paths.push_back(new_str);
            return;
        }
        
        char b[10];                     
        sprintf(b, "%d", root->val);
        string str(b);
        new_str += b;
        new_str += "->";       //有左右子树时加上“->”
        
        if(root->right){
            search(root->right, new_str, paths);
        }
        if(root->left){
            search(root->left, new_str, paths);
        }
    }
};