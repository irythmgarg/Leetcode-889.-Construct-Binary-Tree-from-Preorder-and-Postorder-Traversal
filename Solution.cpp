// 🌲 Problem: Construct Binary Tree from Preorder and Postorder Traversals
// ✍️ Author: Ridham Garg (Thapar Institute of Engineering and Technology)
// 📧 Email: Ridhamgarg000@gmail.com

class Solution {
public:
    // 🔍 Helper function to find the index of a value in postorder traversal
    int find(vector<int>& postorder, int posts, int poste, int val) {
        for (int i = posts; i <= poste; i++) {
            if (postorder[i] == val)
                return i;
        }
        return -1;
    }

    // 🧱 Recursive function to build the tree using preorder and postorder
    TreeNode* maketree(vector<int>& preorder, vector<int>& postorder, int pres, int preend, int posts, int poste) {
        // 🚫 Base case: No elements to construct
        if (pres > preend || posts > poste)
            return NULL;

        // 🪵 Create the current root node
        TreeNode* root = new TreeNode(preorder[pres]);

        // 🧍‍♂️ Leaf node case
        if (pres == preend)
            return root;

        // 🔎 Find the index of the next left child in postorder array
        int postindex = find(postorder, posts, poste, preorder[pres + 1]);

        // 🔢 Count number of elements in left subtree
        int elements = postindex - posts + 1;

        // 🔄 Recursively construct left and right subtrees
        root->left = maketree(preorder, postorder, pres + 1, pres + elements, posts, postindex);
        root->right = maketree(preorder, postorder, pres + 1 + elements, preend, postindex + 1, poste);

        return root; // ✅ Return constructed root
    }

    // 🌟 Main driver function
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {
        int n = preorder.size();
        return maketree(preorder, postorder, 0, n - 1, 0, n - 1);
    }
};
