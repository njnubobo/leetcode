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
        if (!root){                    //�ݹ�Ľ�������
            int* p = new int[2];
            p[0] = p[1] = 0;
            return p;
        }
        
        int *pLeft, *pRight;
        pLeft = robu(root->left); //�������ڸ������ĸ��ڵ�ѡ�벻ѡʱ�����ֵ
        pRight = robu(root->right); //
        
        int *pCur;
        pCur = new int[2];
        pCur[0] = max(pLeft[0], pLeft[1]) + max(pRight[0], pRight[1]); //��ѡ��ýڵ�ʱ�����ֵ
        pCur[1] = root->val + pLeft[0] + pRight[0]; //ѡ��ýڵ�ʱ�����ֵ
        return pCur;
    } 
};