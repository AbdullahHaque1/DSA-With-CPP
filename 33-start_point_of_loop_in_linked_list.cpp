#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertNode(Node **head, int ele)
{
    Node *newnode = new Node;
    newnode->data = ele;
    newnode->next = NULL;
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newnode;
    return;
}

void createCycle(Node **head, int pos)
{
    Node *curr = *head;
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (pos)
    {
        curr = curr->next;
        pos--;
    }
    temp->next = curr;
}

Node *findCycle(Node **head)
{
    Node *fast = *head;
    Node *slow = *head;
    Node *findans = *head;
    while (slow != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            while (slow != findans)
            {
                slow = slow->next;
                findans = findans->next;
            }
            return findans;
        }
    }
    return NULL;
}
void printList(Node *head)
{
    Node *temp = head;
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

    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);
    insertNode(&head, 5);

    cout << "Original Linked List is : ";
    printList(head);
    createCycle(&head, 2);
    Node *ans = findCycle(&head);

    if (ans == NULL)
        cout << "No Cycle :";
    else
    {
        int a = 0;
        Node *temp = head;
        while (temp != ans)
        {
            a++;
            temp = temp->next;
        }
        cout << "The tail connect at pos : ";
        cout<<a;
    }
}