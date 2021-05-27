#include<iostream>
#include<string>
using namespace std;

class node{   //structure of a node
    public:
    int data;
    node *next;
    node( int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(node * &head, int val){ //insert value at the end
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=n;
}
void display( node *head){ //display the complete linked list
    node *ptr=head;
    while(ptr!=NULL){
    cout<<ptr->data<<"->";
    ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
node * reverseK( node *&head, int k){ // reverse k node
        node * prev=NULL;
    node *curr=head;
    node *nextPtr;
    int count=0;
    while(curr!=NULL && count<k){
        nextPtr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextPtr;
        count++;
    }
    if(nextPtr!=NULL)
    head->next=reverseK(nextPtr,k);

    return prev;
}

int main(){
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    int k=2;
    node* newHead=reverseK(head, k);
    display(newHead);
    return 0;
}