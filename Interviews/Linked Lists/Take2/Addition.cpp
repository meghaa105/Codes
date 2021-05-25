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
void add_nodes(node*head, node*head1, node*head2)
{
    if(head == NULL || head1 == NULL)
    {
        cout << "Can't add" << endl;
    }
    else
    {
        node* temp;
        node *temp1;
        temp = head;
        temp1 = head1;
        while(temp && temp1)
        {
            head2 = insert(head2,temp1->data + temp->data);
            temp= temp->next;
            temp1 = temp1->next;
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
    node*head1;
    node *head2;
    int n,n1;
    cout << "Enter the number of terms " << endl;
    cin >> n;
    n1 = n;
    int temp;
    while(n--)
    {
        cin >> temp;
        head = insert(head,temp);
    }
    cout << "Now insert for list2" << endl;
    while(n1--)
    {
        cin >> temp;
        head1 = insert(head1,temp);
    }
    add_nodes(head,head1,head2);
    cout << "Addition of the two lists is" << endl;
    print(head);
    print(head1);
    print(head2);
    return 0;
}