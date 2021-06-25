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
void inorder(struct Node* root){
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(struct Node* root){
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    
    preorder(root->right);
}
void postorder(struct Node* root){
    if(root==NULL)
    return;
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct Node* root=new Node(1); // creation of a tree given below
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
