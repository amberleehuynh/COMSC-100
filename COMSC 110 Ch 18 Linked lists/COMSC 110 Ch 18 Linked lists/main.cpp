#include <iostream>

using namespace std;

// This defines a data type that contains a single
// integer value, & a pointer to the next mode in the list
struct ListNode {
    int val;
    ListNode *next;
};

int main()
{
    ListNode *head_of_list;
    ListNode *newNode;
    ListNode *tmpNode;
    ListNode *nextNode;

    // Allocate 1 new node
    newNode = new ListNode;
    newNode->val = 10; // Set the value
    newNode->next = 0; // Set the inital pointer to 0
    // Nullptr same thing as 0

    // Put this node at the front of the list
    head_of_list = newNode;

    // Allocate another node
    newNode = new ListNode;
    newNode->val = 20; // Set the value
    newNode->next = 0; // Set the inital pointer to 0

    // Set the next pointer to the current first
    // item in the list
    newNode->next = head_of_list;

    // Put this node at the front of the list
    head_of_list = newNode;

    // Print each element in the list
    tmpNode = head_of_list;
    while (tmpNode) {
        cout << tmpNode->val << endl;

        // Go to the next node in the list
        tmpNode = tmpNode->next;
    }

    // Free each element in the list
    tmpNode = head_of_list;
    while (tmpNode) {
        cout << "Freeing node: " << tmpNode->val << endl;

        // Save a pointer to the next one in the list
        nextNode = tmpNode->next;
        // Free this one
        delete tmpNode;
        // Move the current pointer to the next one
        tmpNode = nextNode;
    }
    // Set the list to empty
    head_of_list = 0;

    return 0;

}

