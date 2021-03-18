#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
};

node * insert(node* head,int data)
{
    node *newNode = (node *)malloc(sizeof( node));
    node *temp;
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        // cout << data << head << endl;
        return head;
        
    }
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
        // cout << data << temp << endl;
    }
    temp->next = newNode;
    // cout << data << temp << endl;
    return head;
}

void print(node *head)
{
    if(head == NULL)
    {
        return;
    }
    node *temp;
    temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    node *head1;
    int n;
    cin >> n;
    while(n--)
    {
        int temp;
        cin >> temp;
        insert(head1,temp);
    }
    print(head1);
}
  