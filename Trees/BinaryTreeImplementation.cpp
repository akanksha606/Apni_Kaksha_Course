#include<iostream>
#include<stack>
#include<math.h>
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
int main(){
    struct Node* root=new Node(1); // creation of a tree given below
    root->left=new node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
}
/*   1
    / \
   2   3
  / \
 4   5  */