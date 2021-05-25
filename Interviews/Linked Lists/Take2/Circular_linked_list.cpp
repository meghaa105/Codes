#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* insert(node* head, int input)
{
    node* new_node = (node*)malloc(sizeof(node));
    // node *newNode = (node*)malloc(sizeof(node));
    new_node->data = input;
    new_node->next = NULL;
    if(head == NULL)
    {
        head = new_node;
        return head;
    }
    else
    {
        node*temp;
        temp = head;
        while(temp->next != head)
        {
            temp= temp->next;
        }
        temp->next = new_node;
        return head;
    }
}

void print(node* head)
{
    if(head == NULL)
    {
        cout << " The list is empty" << endl;
    }
    else
    {
        node*temp;
        temp = head;
        while(temp->next!=head)
        {
            cout << temp->data << endl;
            temp= temp->next;        
        }
        cout << temp->data;
    }
}
int main()
{
    node*head;
    int n;
    cout << "Enter the number of terms " << endl;
    cin >> n;
    
    while(n--)
    {
        int temp;
        cin >> temp;
        head = insert(head,temp);
    }
    // cout << "Enter the term you want to delete" << endl;
    // cin >> temp;
    // head = delete_node(head,temp);
    cout << "All the terms inserted are" << endl;
    print(head);
    return 0;
}
