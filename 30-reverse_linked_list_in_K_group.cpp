#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node *&head, int ele)
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

Node* reverseKgroup(Node *head, int k)
{
    if(head == NULL || head->next == NULL)
    return head;

    int len = 0;
    Node *temp = head;
    while (temp)
    {
        len++;
        temp = temp->next;
    }

    Node *dummyHead = new Node();
    dummyHead->data = 0;
    dummyHead->next = head;

    Node *pre = dummyHead;
    Node *curr;
    Node *nex;
    while (len >= k)
    {
        curr = pre->next;
        nex = curr->next;
        for (int i = 1; i < k; i++)
        {
            curr->next = nex->next;
            nex->next = pre->next;
            pre->next = nex;
            nex = curr->next;
        }
        pre = curr;
        len -= k;
    }
    return dummyHead->next;
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
    Node *head = NULL;

    push(head, 5);
    push(head, 4);
    push(head, 3);
    push(head, 2);
    push(head, 1);
    cout << "Original linked list is : ";
    display(head);
    int key;
    cout << "Enter the key : ";
    cin >> key;
    Node* reverse = reverseKgroup(head, key);
    cout << "Updated linked list is : ";
    display(reverse);

    return 0;
}





