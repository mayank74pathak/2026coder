class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map<int,map<int,multiset<int>>>nodes;
       queue<pair<TreeNode*,pair<int,int>>>todo;
       todo.push({root,{0,0}});
       while(!todo.empty())
       {
        auto p=todo.front();
        todo.pop();
        TreeNode*node=p.first;
        int x=p.second.first;
        int y=p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left)
        {
            todo.push({node->left,{x-1,y+1}});
        }
        if(node->right)
        {
             todo.push({node->right,{x+1,y+1}});
        }
       } 
       vector<vector<int>>ans;
       for(auto &p:nodes)
       {
        vector<int>col;
        for(auto &q:p.second)
        {
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
       ans.push_back(col);
       }
    return ans;
    }
};
// Good question—this is exactly the part where most people get confused.

// 👉 First, important correction:
// nodes is NOT a 2D matrix.
// It’s a nested ordered map structure.

// 🧠 What nodes Actually Looks Like
// map<int, map<int, multiset<int>>> nodes;

// Think of it like:

// x (column)
//  └── y (row)
//       └── multiset of values

// So structurally:

// nodes = {
//    x1: {
//         y1: {values},
//         y2: {values}
//        },
//    x2: {
//         y1: {values}
//        }
// }

// 👉 It’s more like a 3-level sorted structure, not a matrix.

// 🔍 Example to Visualize

// Suppose tree gives:

// nodes = {
//   -1: {1: {9}},
//    0: {0: {3}, 2: {15}},
//    1: {1: {20}},
//    2: {2: {7}}
// }
// 🔁 Now Understand Your Loop
// Code:
// for (auto &p : nodes) {
//     vector<int> col;

//     for (auto &q : p.second) {
//         col.insert(col.end(), q.second.begin(), q.second.end());
//     }

//     ans.push_back(col);
// }
// 🔹 Step-by-Step Execution
// 1️⃣ Outer Loop
// for (auto &p : nodes)
// p.first → column x
// p.second → inner map (rows)

// 👉 Iterates column by column (left → right)

// 2️⃣ Inner Loop
// for (auto &q : p.second)
// q.first → row y
// q.second → multiset of values

// 👉 Iterates top → bottom inside that column

// 3️⃣ Insert Values
// col.insert(col.end(), q.second.begin(), q.second.end());

// 👉 Adds all values at that (x, y)
// 👉 Already sorted because of multiset

// 🧠 Dry Run

// Take column x = 0:

// 0: {
//    0: {3},
//    2: {15}
// }

// Loop:

// y = 0 → add 3
// y = 2 → add 15

// 👉 col = [3, 15]

// 🔚 Final Answer Builds Like
// ans = [
//   [9],        // x = -1
//   [3, 15],    // x = 0
//   [20],       // x = 1
//   [7]         // x = 2
// ]
// ⚡ Key Insight

// 👉 This line is the core:

// col.insert(col.end(), q.second.begin(), q.second.end());
// q.second is a multiset
// It may contain multiple values (same position)
// They are already sorted
// 💡 Why This Works Perfectly

// Because:

// map sorts x (columns)
// inner map sorts y (rows)
// multiset sorts values at same position

// 👉 So no manual sorting needed anywhere.

// 🧠 Simple Analogy

// Think of it like:

// Outer map → vertical columns
// Inner map → levels in that column
// Multiset → nodes stacked at same point
