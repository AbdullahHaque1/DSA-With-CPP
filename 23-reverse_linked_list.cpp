#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

void elements(node** head, int ele)
{
    node*newnode = new node();

    newnode->data = ele;
    newnode->next = NULL;
    if(*head == NULL)
    {
        *head = newnode;
    }
    else{
        newnode->next = *head;
        *head = newnode;
    }
}
void reverse(node** head)
{
    node* current = *head;
    node* prev = NULL;
    node* next = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}
void display(node* temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head = NULL;

    elements(&head,2);
    elements(&head,4);
    elements(&head,5);
    elements(&head,6);
    elements(&head,7);
    cout<<"Element of linked list are : ";
    display(head);
    cout<<"Reverse linked list is : ";
    reverse(&head);
    display(head);


    return 0;
}