#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
class node{
    public:
    node *next;
    int data;
    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    public:
    node* front ;
    node* back;
    queue(){
        front=NULL;
        back=NULL;
    }

void push(int val){
    node *n=new node(val);
    if(front==NULL){
        back=n;
        front=n;
        return;
    }
    back->next=n;
    back=n;
}
void pop(){
    if(front==NULL)
    {
        cout<<"underflow";
        return;
    }
    node * todel=front;
    front=front->next;
    delete todel;
}

int peek(){
    if(front==NULL)
    {
        cout<<"no element";
        return -1;
    }
    return front->data;
}

bool empty(){
    if(front==NULL)
    return true;
    else return false;
}
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;

    return 0;
}