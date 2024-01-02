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
  
  /*  bool check(TreeNode*root,int min,int max)
    {
        if(root==NULL)return 1;
        if(root->val<=min || root->val>=max)return 0;
        return check(root->left,min,root->val) && check(root->right,root->val,max);
    } 
    void summy(TreeNode*root,int &sum)
    {
        if(root==NULL)return ;
        summy(root->left,sum);
        sum+=root->val;
        summy(root->right,sum);
    }
    int ans=0;
    int maxSumBST(TreeNode* root) {
        if(root==NULL)return ans;
     int sum=0;
      if(check(root,INT_MIN,INT_MAX))
      { summy(root,sum);
          ans=max(ans,sum);
      }
      ans=max(ans,max(maxSumBST(root->left),maxSumBST(root->right)));
      return ans;

      

        
    }*/





    
    int res=0;
    vector<int>answer(TreeNode*root)
    {   
        if(root==NULL)
        { 
          return {INT_MAX,INT_MIN,0};  
        }
      vector<int>left= answer(root->left);
      vector<int>right= answer(root->right);
      if(left[1]>=root->val || right[0]<=root->val)
      {
          return {INT_MIN,INT_MAX,0};   
      }
      int sum=left[2]+right[2]+root->val;
       res=max(res,sum);
       vector<int>ans;
       ans.push_back(min(root->val,left[0]));
       ans.push_back(max(root->val,right[1]));
       ans.push_back(sum);
       

      return ans;

    }
    int maxSumBST(TreeNode* root) {
      if(root==NULL)return 0;
      vector<int>ans=answer(root);
      return res;
        
    }
};
