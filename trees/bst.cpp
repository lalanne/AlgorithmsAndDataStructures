#include "BinaryTree.hpp"

#include "gtest/gtest.h"

TEST(bst, construction) {
    Node r(3);
    BinaryTree t(&r);

    EXPECT_EQ(1, t.size());
}

TEST(bst, null_construction) {
    BinaryTree t(NULL);

    EXPECT_EQ(0, t.size());
}

TEST(bst, size_3) {
    Node r(3);
    Node le(2);
    Node ri(4);
    r.left = &le;
    r.right = &ri;

    BinaryTree t(&r);

    EXPECT_EQ(3, t.size());
}

TEST(bst, size_5) {
    Node r(10);
    Node le(5);
    Node ri(15);
    r.left = &le;
    r.right = &ri;

    Node le1(3);
    Node ri1(7);
    le.left = &le1;
    le.right = &ri1;

    BinaryTree t(&r);

    EXPECT_EQ(5, t.size());
}

TEST(bst, size_7) {
    Node r(10);
    Node le(5);
    Node ri(15);
    r.left = &le;
    r.right = &ri;

    Node le1(3);
    Node ri1(7);
    le.left = &le1;
    le.right = &ri1;

    Node le2(13);
    Node ri2(17);
    ri.left = &le2;
    ri.right = &ri2;

    BinaryTree t(&r);

    EXPECT_EQ(7, t.size());
}

TEST(bst, size_empty_tree) {
    BinaryTree t(NULL);

    EXPECT_EQ(0, t.size());
}

TEST(bst, size_tree_1_node) {
    Node r(3);
    BinaryTree t(&r);

    EXPECT_EQ(1, t.size());
}
