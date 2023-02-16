#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
};

void push(Node **head, int ele)
{
    Node *newnode = new Node();
    newnode->data = ele;
    newnode->link = NULL;
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        newnode->link = *head;
        *head = newnode;
    }
}
Node *Merge(Node *a, Node *b)
{
    if (a == NULL)
        return a;
    if (b == NULL)
        return b;

    if (a->data > b->data)
        swap(a, b);

    Node *res = a;

    while (a != NULL && b != NULL)
    {

        Node *temp = NULL;

        while (a != NULL && a->data <= b->data)
        {

            temp = a;
            a = a->link;
        }

        temp->link = b;
        swap(a, b);
    }

    return res;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    cout << endl;
}
int main()
{
    Node *a = NULL;
    Node *b = NULL;
    Node *res = NULL;

    push(&a, 4);
    push(&a, 3);
    push(&a, 2);
    cout<<"First linked list is : "<<endl;
    display(a);

    push(&b, 9);
    push(&b, 8);
    push(&b, 7);
    cout<<"Second linked list is : "<<endl;
    display(b);
     
    res = Merge(a,b);
    cout<<"Merged linked list is : ";
    display(res);


    return 0;
}