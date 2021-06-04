//implementation of circular linked list
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
void insertAtHead(node* &head, int val){ //insert in the beginning and when head is null
    node* n=new node(val);
    if(head==NULL){
    n->next=n;
    head=n;
    return;
    }
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
}
    temp->next=n;
    n->next=head;
    head=n;
}
void insertAtTail(node *&head, int val){ //insert at the end
    if(head==NULL){
    insertAtHead(head, val);
    return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
}
    temp->next=n;
    n->next=head;
}
void display(node *head){ // print the circular linked list
    node* temp=head;
   do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"HEAD"<<endl;
}

void deleteAtHaed(node *&head){ //delete head
    node *temp=head;
    while(temp->next!=head)
    temp=temp->next;

    node *todelete=head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}
void deletion(node *&head, int pos){
    if(pos==1){
    deleteAtHaed(head);
    return;
    }
    int c=1;
    node *temp=head;
    while(c!=pos-1){
        temp=temp->next;
        c++;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
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
    insertAtHead(head,7);
    display(head);
    deletion(head, 5);
    display(head);
    deletion(head, 1);
    display(head);
    return 0;

}