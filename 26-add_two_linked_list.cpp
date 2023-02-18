#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void push(Node** head, int data)
{
    Node* newnode = new Node();
    newnode->data = data;
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
Node* addLinkedlist(Node* l1,Node* l2)
{
    Node* dummy = new Node();
    Node* current = dummy;
    int carry = 0;
    while(l1 != NULL || l2 != NULL || carry)
    {
        int sum = 0;
        if (l1 != NULL)
        {
            sum = sum + l1->data;
            l1 = l1->next;
        }

        if (l2 != NULL)
        {
            sum = sum + l2->data;
            l2 = l2->next;
        }

        sum = sum + carry;
        carry = sum / 10;
        Node* temp = new Node();
        temp->data = sum%10;
        current->next = temp;
        current= current->next;
    }
    return dummy->next;

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
    Node* result = NULL;
    Node* a = NULL;
    Node* b = NULL;

    push(&a,2);
    push(&a,4);
    push(&a,3);
    cout<<"First linked list ";
    display(a);

    push(&b,5);
    push(&b,6);
    push(&b,4);
    cout<<"Second linked list ";
    display(b);

    result = addLinkedlist(a,b);
    cout<<"Sum of two linked list ";
    display(result);
}

