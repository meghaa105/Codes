#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};
node *delete_node(node*head, int input)
{
    if(head == NULL)
    {
        return head;
    }
    if(head->data == input)
    {
        return head->next;
    }
    else
    {
        node* temp;
        temp = head;
        while(temp->next!=NULL && temp->next->data!=input)
        {
            temp= temp->next;
        }
        if(temp->next==NULL)
        {
            return head;
        }
        else
        {
            temp->next = temp->next->next;
            return head;
        }
    }
}
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
        while(temp->next !=NULL)
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
        while(temp)
        {
            cout << temp->data << endl;
            temp= temp->next;        
        }
    }
}

int main()
{
    node*head;
    int n;
    cout << "Enter the number of terms " << endl;
    cin >> n;
    int temp;
    while(n--)
    {
        cin >> temp;
        head = insert(head,temp);
    }
    cout << "Enter the term you want to delete" << endl;
    cin >> temp;
    head = delete_node(head,temp);
    cout << "All the terms inserted are" << endl;
    print(head);
    return 0;
}