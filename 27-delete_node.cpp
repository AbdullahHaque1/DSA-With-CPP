#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void push(Node **head, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
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
void deleteNode(Node **head, int ele)
{
    Node* temp = new Node();
    if((*head)->data == ele)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        temp = NULL;
    }
    else{
        Node* current = *head;
        while(current->next != NULL)
        {
            if((current->next)->data == ele)
            {
                temp = current->next;
                current->next = (current->next)->next;
                free(temp);
                temp = NULL;
            }
            else{
                current = current->next;
                }
        }
    }
}

void display(Node* temp)
{
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
    push(&head, 9);
    push(&head, 1);
    push(&head, 5);
    push(&head, 4);
    cout<<"Original linked list is : ";
    display(head);
    deleteNode(&head,5);
    cout<<"Updated linked list is : ";
    display(head);

    return 0;
}