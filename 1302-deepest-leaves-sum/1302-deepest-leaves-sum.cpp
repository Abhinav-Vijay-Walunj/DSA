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
    int deepestLeavesSum(TreeNode* root) {
    queue<TreeNode*> toDo;
        toDo.push(root);
        int sum(0);
        while(!toDo.empty()){
            sum = 0; // re-initiate at each level
            int n(toDo.size());
            while(n--){
                TreeNode* node(toDo.front()); toDo.pop();
                if(!node->right && !node->left) sum+=node->val;
                if(node->left) toDo.push(node->left);
                if(node->right) toDo.push(node->right);
            }
        }
        return sum;
    }
    /*
    int max_depth;
    
    int sumHelper (TreeNode* root, int depth) {
        if(!root) return 0;
        if(depth==max_depth-1) return root->val;
        return sumHelper(root->left, depth+1) +
            sumHelper(root->right, depth+1);
    
    }
    int depthHelper(TreeNode* root) {
        if(!root) return 0;
        return max(1+ depthHelper(root->left), 1+ depthHelper(root->right));
    }
    int deepestLeavesSum(TreeNode* root) {
        max_depth = depthHelper(root);
        return sumHelper(root, 0);
    }*/
};