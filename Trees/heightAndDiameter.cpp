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
int calHeight(Node* root){
    if(root==NULL)
    return 0;
    int leftH=calHeight(root->left);
    int rightH=calHeight(root->right);
    return max(leftH,rightH)+1;

}
int main(){
    struct Node* root=new Node(1); // creation of a tree given below
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<calHeight(root)<<endl;
    return 0;
}