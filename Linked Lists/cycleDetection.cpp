//floyd's algo or hare and tortise algo
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
void makecycle(node *&head, int pos){ // to make a cycle at given position
    node *ptr=head;
    node *startnode;
    int c=0;
    while(ptr->next!=NULL){
        if(c==pos)
        startnode=ptr;
        ptr=ptr->next;
        c++;
    }
    ptr->next=startnode;

}
bool detectCycle(node *head){ //to detect a cycle in the linked list
    node * slow=head;
    node *fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
}

void removeCycle(node *&head){ // removing cycle assuming that cycle is already present
    node *fast=head;
    node *slow=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
        }
        while(slow!=fast);
        fast=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;

        
}
int main(){
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    makecycle(head, 3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    
    
    return 0;
}

