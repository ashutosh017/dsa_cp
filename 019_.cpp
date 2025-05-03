#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head){
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}

struct Node* insertAtFirst(struct Node *head,struct Node *a,int data){
    a->data = data;
    a->next = head->next;
    head = a;
    return head;
}
// void insertAtFirst(struct Node **head,struct Node **a,int data){
//     (*a)->data = data;
//     (*a)->next = (*head)->next;
//     (*head) = (*a);
// }

int main(){
    Node *a;

    Node *head;
    Node *first;
    Node *second;
    Node *third;

    a = new struct Node[sizeof(struct Node)];


    first = new struct Node[sizeof(struct Node)];
    second = new struct Node[sizeof(struct Node)];
    third = new struct Node[sizeof(struct Node)];
    
    first->data = 1;
    second->data = 2;
    third->data = 3;
    
    first->next = second;
    second->next = third;
    third->next = NULL;

    head = first;

    // insertAtFirst(&head,&a,22);
    head = insertAtFirst(head,a,22);
    display(head);
    return 0;
}