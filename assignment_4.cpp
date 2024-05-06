#include <iostream>

// Linked list node
class Node {
public:
    int data;
    Node* next;
};

// Insert a new node at the front of the list
void insertAtFront(Node** head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Remove the first node from the list
Node* removeFirstNode(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}


void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Test functions
int main() {
    Node* head = NULL;
    insertAtFront(&head, 1);
    insertAtFront(&head, 2);
    insertAtFront(&head, 3);
    insertAtFront(&head, 4);
    insertAtFront(&head, 5);
    printList(head);
    return 0;
}
    int getPositionValue(Node* head, int position) 
    // Return the value at the given position in the list
    {
        Node* temp = head;
        int count = 0;
        while (temp != NULL && count < position) {
            temp = temp->next;
            count++;
        }
        if (temp != NULL) {
            return temp->data;
        }
        // Return a default value if position is out of range
        return -1;
    }
    void testPrintListEmpty() {
        // Test with an empty list
    Node* head = NULL;
    printList(head);
    // Expected output: (empty line)
}

void testPrintList() {
    // Test with a list of 5 elements
    Node* head = NULL;
    insertAtFront(&head, 1);
    insertAtFront(&head, 2);
    insertAtFront(&head, 3);
    insertAtFront(&head, 4);
    insertAtFront(&head, 5);
    printList(head);
    // Expected output: 5 4 3 2 1
}


