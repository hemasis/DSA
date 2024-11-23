#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node* insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    if(head != NULL)
    {
        head->prev = temp;
    }
    return temp;
}

int main()
{
    Node *head = NULL;
    head = insertBegin(head, 60);
    head = insertBegin(head, 40);
    head = insertBegin(head, 20);
    Node *temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}