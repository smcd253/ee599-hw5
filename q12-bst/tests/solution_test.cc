#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <climits>      // INT_MAX (linux)
#include <limits>       // INT_MAX (darwin)
#include <string>       // std::string
#include <iostream>     // CaptureStdout


/******************** std::vector<int> BST::vect_in_order_recursive ********************/
TEST(BST_VECT_IN_ORDER_RECURSIVE, STANDARD)
{
    std::vector<int> input = {15, 11, 12, 10, 14, 13, 16, 18, 17, 20, 19};
    BST bst(input);

    std::vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::vector<int> actual = bst.vect_in_order_recursive();
    EXPECT_EQ(expected, actual);
}

TEST(BST_VECT_IN_ORDER_RECURSIVE, EMPTY)
{
    std::vector<int> input = {};
    BST bst(input);

    std::vector<int> expected = {};
    std::vector<int> actual = bst.vect_in_order_recursive();
    EXPECT_EQ(expected, actual);
}

TEST(BST_VECT_IN_ORDER_RECURSIVE, SINGULAR)
{
    std::vector<int> input = {1};
    BST bst(input);

    std::vector<int> expected = {1};
    std::vector<int> actual = bst.vect_in_order_recursive();
    EXPECT_EQ(expected, actual);
}


/******************** std::vector<int> BST::vect_in_order_recursive ********************/
TEST(BST_VECT_IN_ORDER, STANDARD)
{
    std::vector<int> input = {15, 11, 12, 10, 14, 13, 16, 18, 17, 20, 19};
    BST bst(input);

    std::vector<int> expected = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::vector<int> actual = bst.vect_in_order();
    EXPECT_EQ(expected, actual);
}
TEST(BST_VECT_IN_ORDER, EMPTY)
{
    std::vector<int> input = {};
    BST bst(input);

    std::vector<int> expected = {};
    std::vector<int> actual = bst.vect_in_order();
    EXPECT_EQ(expected, actual);
}
TEST(BST_VECT_IN_ORDER, SINGULAR)
{
    std::vector<int> input = {};
    BST bst(input);

    std::vector<int> expected = {};
    std::vector<int> actual = bst.vect_in_order();
    EXPECT_EQ(expected, actual);
}

/******************** int BST::height ********************/
TEST(BST_HEIGHT, STANDARD)
{
    std::vector<int> input = {15, 11, 12, 10, 14, 13, 16, 18, 17, 20, 19};
    BST bst(input);

    int expected = 5;
    int actual = bst.height();
    EXPECT_EQ(expected, actual);
}

TEST(BST_HEIGHT, EMPTY)
{
    std::vector<int> input = {};
    BST bst(input);

    int expected = 0;
    int actual = bst.height();
    EXPECT_EQ(expected, actual);
}

TEST(BST_HEIGHT, SINGULAR)
{
    std::vector<int> input = {1};
    BST bst(input);

    int expected = 1;
    int actual = bst.height();
    EXPECT_EQ(expected, actual);
}

TEST(BST_HEIGHT, UNBALANCED)
{
    std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    BST bst(input);

    int expected = 10;
    int actual = bst.height();
    EXPECT_EQ(expected, actual);
}