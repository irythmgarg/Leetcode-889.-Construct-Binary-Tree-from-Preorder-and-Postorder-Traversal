# Leetcode-889.-Construct-Binary-Tree-from-Preorder-and-Postorder-Traversal
# 🌲 Construct Binary Tree from Preorder and Postorder Traversals

✨ **Problem Statement**:
Given two integer arrays `preorder` and `postorder` where `preorder` is the preorder traversal of a binary tree and `postorder` is the postorder traversal of the same tree, construct and return the binary tree. It is guaranteed that the answer is **unique** if the binary tree can be constructed.

---

## 🧠 Approach

### 🔁 Recursive Construction

* The first node in `preorder` is the root.
* The second node in `preorder` is the left child. We find this node in the `postorder` array.
* All nodes before that node in `postorder` are part of the left subtree.
* Recursively apply this logic to construct left and right subtrees.

> 💡 We keep track of indices of current subtrees in both preorder and postorder and pass them recursively.

---

## ⏱️ Time Complexity

* **O(n^2)** in worst case due to `find()` which is O(n) and called for every node.

## 🗃️ Space Complexity

* **O(n)** due to recursion stack and creation of nodes.

---

## 🧪 Example

```cpp
Input: preorder = [1,2,4,5,3,6,7], postorder = [4,5,2,6,7,3,1]
Output: Root of binary tree
```

Structure:

```
        1
      /   \
     2     3
   /  \   / \
  4    5 6   7
```

---

## 👨‍💻 Author

* **Name**: Ridham Garg
* 🎓 Thapar Institute of Engineering and Technology
* 📧 Email: [Ridhamgarg000@gmail.com](mailto:Ridhamgarg000@gmail.com)

---

🌳 Rebuilding trees with just their traversals? Piece of cake! 🍰🚀
