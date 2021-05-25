#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* insert(node* head,int input){
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = input;
    new_node ->next = NULL;
    if(head==NULL){
        head = new_node;
        return head;
    }
    else{
        node* temp;
        temp = head;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
        return head;
    }
}

void search(node* head,int input){
    if(head==NULL){
        cout << "list is empty" << endl;
    }
    if(head->data == input){
        cout << "present" << endl;
    }
    else{
        node* temp;
        temp = head;
        while(temp){
            if(temp->data == input){
                cout << "present" << endl;
                break;
            }
            temp = temp->next;
        }
        if(temp == NULL){
            cout << "absent" << endl;
        }
    }
}

int main(){
    node* head;
    int n;
    cin >> n;
    while(n--){
        int input;
        cin>> input;
        head = insert(head,input);
    }
    cout << "Enter the key to search" << endl;
    int key;
    cin >> key;
    search(head,key);
    return 0;
}