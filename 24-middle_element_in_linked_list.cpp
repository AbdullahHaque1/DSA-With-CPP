#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
};

void elements(Node** head, int ele)
{
    Node*newnode = new Node();

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

void middleEle(Node** head)
{
    int len = 0;
    Node* temp = *head;
    Node* temp1 = *head;
    while(temp!= NULL)
    {
        len++;
        temp = temp->next;
    }
    int a = len/2;
    while(a--)
    {
        temp1 = temp1->next;
    }
    cout<<"Middle element is : "<<temp1->data;
}
void display(Node* temp)
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
    Node* head = NULL;
    elements(&head,1);
    elements(&head,2);
    elements(&head,3);
    elements(&head,4);
    elements(&head,5);
    elements(&head,6);
    elements(&head,7);
    cout<<"Linked list element are : ";
    display(head);
    middleEle(&head);

    return 0;
}