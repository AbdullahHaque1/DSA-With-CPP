#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head, int ele)
{
    Node *newnode = new Node();
    newnode->data = ele;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;

    }
    else
    {
        newnode->next = *head;
        *head = newnode;
    }
}

Node *rotateRight(Node **head, int k)
{
    if (*head == NULL || (*head)->next == NULL)
        return *head;
    for (int i = 0; i < k; i++)
    {
        Node *temp = *head;
        while (temp->next->next != NULL)
            temp = temp->next;

        Node *end = temp->next;
        temp->next = NULL;
        end->next = *head;
        *head = end;
    }
    return *head;
}

void display(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    cout << "Original Linked list is : ";
    display(head);
    cout << "Rotated linked list is : ";
    rotateRight(&head, 2);
    display(head);
    return 0;
}