#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node *head = NULL;

void insertBeg (int d)
{
    Node *ptr = new Node();
    ptr->data = d;
    ptr->next = head;
    head = ptr;
}

void insertEnd (int d)
{
    Node *ptr = new Node();
    ptr->data = d;
    ptr->next = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void printLL (Node* n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node *ptr = new Node();
    ptr->data = 2;
    ptr->next = NULL;
    head = ptr;
    insertBeg (12);
    insertEnd (122);
    printLL (head);
    return 0;
}
