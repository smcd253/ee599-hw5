#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <iostream>
#include <vector>       // std::vector<int>
#include <stack>        // std::stack<TreeNode*>
#ifdef __linux__ 
    #include <climits>      // INT_MAX (linux)

#elif __APPLE__
    #include <limits>       // INT_MAX (darwin)
#endif

#include <queue>        // std::queue<TreeNode*>

// Only methods which are marked by "GT" should be tested
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BST 
{
    private:
        TreeNode* root_;
        TreeNode* insert(TreeNode* node, int key);
        void destroy(TreeNode* node);
    public:

        // default constructor
        BST() : root_(nullptr) {}

        // Inserts elements of initial_values
        // one by one into the Tree
        // Runtime = &theta;(n*H), where H &isin;[log(n), n] --> O(n^2)
        BST(std::vector<int> initial_values)
        {
            root_ = nullptr;
            for (auto n : initial_values)
            {
                push(n);
            }
        }

        // destructor
        ~BST()
        {
            destroy(root_);
        }

        // **GT** Inserts a key inside Tree
        void push(int key); 
        // **GT** Returns true of key is in the tree
        bool find(int key); 
        // **GT** Removes the key from the tree. If not successful, returns false.
        bool erase(int key);
        
        // print in order for debugging problem 3
        void print_in_order();

        // ***************** HOMEWORK 5 *****************
        std::vector<int> vect_in_order();
        std::vector<int> vect_in_order_recursive();
        int height();

        // **GT**
        void print_by_level();
};

#endif

