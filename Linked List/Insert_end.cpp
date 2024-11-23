// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };

// Node *insertEnd(Node *head, int x)
// {
//     Node *temp = new Node(x);
//     if(head == NULL)
//     {
//         return temp;
//     }
//     Node *curr = head;
//     while(curr -> next != NULL)
//     {
//         curr = curr -> next;
//         curr -> next = temp;
//         return head;
//     }
// }

// int main()
// {
//     Node *head = NULL;
//     head = insertEnd(head, 10);
//     head = insertEnd(head, 20);
//     head = insertEnd(head, 30);
//     Node *curr = head;
//     cout << "Linked List after insertion at the end: ";
//     while(curr != NULL)
//     {
//         cout << curr -> data << " ";
//         curr = curr -> next;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

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

Node* ReverseList(Node* head, int x)
{
    Node* temp = new Node();
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;

    while(curr != NULL)
    {
        next = curr -> nxt;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}