#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node*next;
};
Node* newNode(int key)
{
    struct Node* temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
void printList(Node* node)
{
    while (node != NULL) {
        printf("%d  ", node->data);
        node = node->next;
    }
}
Node* merge(Node* h1, Node* h2)
{
    if (!h1)
        return h2;
    if (!h2)
        return h1;
    if (h1->data < h2->data) {
        h1->next = merge(h1->next, h2);
        return h1;
    }
    else {
        h2->next = merge(h1, h2->next);
        return h2;
    }
}
int main()
{
    Node* head1 = newNode(5);
    head1->next = newNode(8);
    head1->next->next = newNode(20);
    Node* head2 = newNode(4);
    head2->next = newNode(11);
    head2->next->next = newNode(15);
    Node* mergedhead = merge(head1, head2);
    printList(mergedhead);
    return 0;
}
