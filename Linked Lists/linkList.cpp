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
void insertAtHead( node* &head, int val){ // insert value in the beginning(head)
    node *n= new node(val);
    n->next=head;
    head=n;
}

bool search(node *head, int key){ // search a key in linked list
    node *ptr= head;
    while(ptr!=NULL){
        if(ptr->data==key)
        return true;

        ptr=ptr->next;
    }
    return false;
}
node* reverse(node *&head){ //reverse a linked list by iteration
    node * prev=NULL;
    node *curr=head;
    node *nextPtr;
    while(curr!=NULL){
        nextPtr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextPtr;
   }
   return prev;
}

node* reverseByRecursion( node *&head){ //reverse a linked list by recursion

        if(head==NULL || head->next==NULL)
        return head;
      node *newHead=reverseByRecursion(head->next);
      head->next->next=head;
      head->next=NULL;

      return newHead;
}


int main(){
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head, 4);
    display(head);
    node* newHead=reverseByRecursion(head);
    display(newHead);
    
    return 0;
}

