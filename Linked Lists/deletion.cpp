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
void deletion(node *&head, int val){ // not for head
    node *ptr=head;
    while((ptr->next)->data!=val){
        ptr=ptr->next;
    }
    node* todelete=ptr->next;
    ptr->next=ptr->next->next;
    delete todelete;
}
void display( node *head){ //display the complete linked list
    node *ptr=head;
    while(ptr!=NULL){
    cout<<ptr->data<<"->";
    ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead( node *&head){ // delete head node
    if (head==NULL)
    return;
    node* todelete=head;
    head=head->next;
    delete todelete;
}
int main(){
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    deletion(head,2);
    display(head);
    return 0;
}

