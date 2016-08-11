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
    int rob(TreeNode* root) {
        int *p;
        p = robu(root);
        return max(p[0], p[1]);
        }
    int* robu(TreeNode* root){
        if (!root){                    //递归的结束条件
            int* p = new int[2];
            p[0] = p[1] = 0;
            return p;
        }
        
        int *pLeft, *pRight;
        pLeft = robu(root->left); //左子树在该子树的根节点选与不选时的最大值
        pRight = robu(root->right); //
        
        int *pCur;
        pCur = new int[2];
        pCur[0] = max(pLeft[0], pLeft[1]) + max(pRight[0], pRight[1]); //不选择该节点时的最大值
        pCur[1] = root->val + pLeft[0] + pRight[0]; //选择该节点时的最大值
        return pCur;
    } 
};