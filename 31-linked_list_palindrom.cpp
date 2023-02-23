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

bool isPalindrome(Node *head)
{
    vector<int> v;
    Node* temp1 = head;

    while(temp1 != NULL)
    {
        v.push_back(temp1->data);
        temp1 = temp1->next;
    }
    int i = 0;
    while(i < v.size()/2)
    {
        if(v[i] != v[v.size() - i - 1])
        {
            return false;
        }
        i++;
    }
    return true;
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

    push(head, 1);
    push(head, 2);
    push(head, 2);
    push(head, 1);
    cout << "Original linked list is : ";
    display(head);

    if(isPalindrome(head) == 1)
    {
        cout<<"Linked list is palindrome ";
    }
    else{
        cout<<"Linked list is not palindrome ";
    }
    return 0;
}
