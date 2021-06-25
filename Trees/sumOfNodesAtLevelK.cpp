#include<iostream>
#include<stack>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int sumLevelOrder(Node* root, int k){
    int level=0;
    int sum=0;
    if(root == NULL)
    return -1;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node!=NULL){
        if(level==k){
            sum+=node->data;
        }
            if(node->left!=NULL)
            q.push(node->left);
            if(node->right!=NULL)
            q.push(node->right);
                    }
        else if(!q.empty()){
        q.push(NULL);
        level++;
        }
    }
    return sum;
}
int main(){
    struct Node* root=new Node(1); // creation of a tree given below
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<sumLevelOrder(root,2);
    return 0;
}