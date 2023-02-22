#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node* &head, int ele)
{
    Node *newnode = new Node();
    newnode->data = ele;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
Node *FindIntersection(Node *a, Node *b)
{
    while (b != NULL)
    {
        Node *temp = a;
        while (temp != NULL)
        {
            if (temp == b)
            {
                return b;
            }
            temp = temp->next;
        }
        b = b->next;
    }
    return NULL;
}
void display(Node *head)
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
    Node* head = NULL;
    push(head,4);
    push(head,2);
    push(head,1);
    push(head,3);
    push(head,1);
    Node* head1 = head;
    head = head->next->next->next;
    Node* headSec = NULL;
    push(headSec,3);
    Node* head2 = headSec;
    headSec->next = head;
    cout<<"List1: ";

     display(head1);
    cout<<"List2: "; 
    display(head2);
    Node* answerNode = FindIntersection(head1,head2);

    if(answerNode == NULL )
    cout<<"No intersection\n";
    else
    cout<<"The intersection point is "<<answerNode->data<<endl;

    return 0;
}
