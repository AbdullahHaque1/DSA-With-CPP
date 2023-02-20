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


void DeleteNode(Node **head)
{
    if (*head == NULL)
    {
        cout << "Deletion not possible ";
        return;
    }
    else
    {
        Node *temp1 = *head;
        Node *temp2 = NULL;
        while (temp1->next != NULL)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = NULL;
        free(temp1);
        temp1 = NULL;
    }
}
void display(Node* head)
{
    Node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;

    push(&head , 10);
    push(&head , 12);
    push(&head , 13);
    push(&head , 14);
    push(&head , 15);
    cout<<"Original linked list is : ";
    display(head);

    cout<<"Updated linked list is : ";
    DeleteNode(&head);
    display(head);

    return 0;
}
