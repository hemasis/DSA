#include <bits/stdc++.h>
using namespace std;

// defining the structure of the node
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *sortll(Node *head)
{
    if (!head || !head->next)
    {
        return head;
    }

    // extracting values from the linked list & storing them in a vector
    vector<int> v;
    Node *curr = head;
    while (curr)
    {
        v.push_back(curr->data);
        curr = curr->next;
    }

    // sorting the vector in ascending order
    sort(v.begin(), v.end());

    // storing the sorted values back in the linked list
    curr = head;
    int index = 0;
    while (curr)
    {
        curr->data = v[index++];
        curr = curr->next;
    }
    return head;
}

// function to print the linked list
void print(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = sortll(head);
    print(head);

    return 0;
}