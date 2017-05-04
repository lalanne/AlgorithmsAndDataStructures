#include "SingleLinkedList.hpp"

#include "gtest/gtest.h"

TEST(sll, construction) {
    Node h(3);
    SingleLinkedList list(&h);
   
    EXPECT_EQ(1, list.size());
    EXPECT_EQ(3, (list.pop())->data);
}

TEST(sll, constructionWithNull) {
    SingleLinkedList list(NULL);
   
    EXPECT_EQ(0, list.size());
}

TEST(sll, addOneNodes) {
    Node h(3);
    Node n2(4);
    SingleLinkedList list(&h);

    list.push_back(&n2);
   
    EXPECT_EQ(2, list.size());
    EXPECT_EQ(4, (list.pop())->data);
    EXPECT_EQ(3, (list.pop())->data);
}

TEST(sll, addTwoNodes) {
    Node h(3);
    Node n2(4);
    Node n3(5);
    SingleLinkedList list(&h);

    list.push_back(&n2);
    list.push_back(&n3);
   
    EXPECT_EQ(3, list.size());
    EXPECT_EQ(5, (list.pop())->data);
    EXPECT_EQ(4, (list.pop())->data);
    EXPECT_EQ(3, (list.pop())->data);
}

TEST(sll, addThreeNodes) {
    Node h(3);
    Node n2(4);
    Node n3(5);
    Node n4(6);
    SingleLinkedList list(&h);

    list.push_back(&n2);
    list.push_back(&n3);
    list.push_back(&n4);
   
    EXPECT_EQ(4, list.size());
    EXPECT_EQ(6, (list.pop())->data);
    EXPECT_EQ(5, (list.pop())->data);
    EXPECT_EQ(4, (list.pop())->data);
    EXPECT_EQ(3, (list.pop())->data);
}

TEST(sll, popEmptyList) {
    SingleLinkedList list(NULL);
   
    EXPECT_EQ(NULL, list.pop());
}





