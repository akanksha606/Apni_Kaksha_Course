/*append last k nodes of the linked list in the beginning of the list.
Eg. list= 1,2,3,4,5,6
k=2
output= 5,6,1,2,3,4
*/
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

int listlength(node *head){
     node *temp=head;
     int s=1;
     while(temp->next!=NULL){
         s++;
         temp=temp->next;
     }
    return s;
}
node* appendk(node *&head, int k){
   
    node *newHead;
     node *newtail;
     node *tail=head;
     int l=listlength(head);
        k=k%l;      //if k is larger than length
    int c=1;
    while(tail->next!=NULL){
        
        if(c==l-k)
        newtail=tail;

        if(c==l-k+1)
        newHead=tail;

        tail=tail->next;
        c++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newHead;

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

    node *newhead=appendk(head, 3);
    display(newhead);
    return 0;

}

