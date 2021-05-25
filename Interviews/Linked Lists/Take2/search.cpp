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
        while(temp->next !=NULL)
        {
            temp= temp->next;
        }
        temp->next = new_node;
        return head;
    }
}
void search_node(node*head, int input)
{
    if(head == NULL)
    {
        cout << "Empty list" << endl;
    }
    if(head->data == input)
    {
        cout << "Present" << endl;
    }
    else
    {
        node* temp;
        temp = head;
        while(temp)
        {
            if(temp->data == input)
            {
                cout << "Node found" << endl;
                break;
            }
            temp= temp->next;
        }
        if(temp==NULL)
        {
            cout << "Not found" << endl;
        }
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
    search_node(head,2);
    // cout << "Enter the term you want to delete" << endl;
    // cin >> temp;
    // head = delete_node(head,temp);
    cout << "All the terms inserted are" << endl;
    print(head);
    return 0;
}