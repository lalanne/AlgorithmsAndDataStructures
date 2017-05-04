#include "SingleLinkedList.hpp"

#include "gtest/gtest.h"

TEST(sll, construction) {
    Node h(3);
    SingleLinkedList list(&h);
   
    EXPECT_EQ(1, list.size());
}

TEST(sll, addOneNodes) {
    Node h(3);
    Node n2(4);
    SingleLinkedList list(&h);

    list.push_back(&n2);
   
    EXPECT_EQ(2, list.size());
}

TEST(sll, addTwoNodes) {
    Node h(3);
    Node n2(4);
    Node n3(5);
    SingleLinkedList list(&h);

    list.push_back(&n2);
    list.push_back(&n3);
   
    EXPECT_EQ(3, list.size());
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
}



