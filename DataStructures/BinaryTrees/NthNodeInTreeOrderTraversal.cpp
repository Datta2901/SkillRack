#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* right;
    Node* left;
};

void NthNodepreOrder(struct Node *root,int n){
    static int count = 0; 
    if(root){
        count++;
        if(count == n){
            cout << root->val << endl;
        }
        NthNodepreOrder(root->left,n);
        NthNodepreOrder(root->right,n);
    }
}

void NthNodePostOrder(struct Node* currNode, int N)
{
    static int count = 0;
    if(currNode != NULL){
        count++;
        NthNodePostOrder(currNode->left,N);
        NthNodePostOrder(currNode->right,N);
        count++;
        if(count == N){
            printf("%d",currNode->val);
            return;
        }
    }
}


void NthNodeInInorder(struct Node* currNode, int N) {
    static int count = 0;
    if(currNode){
        NthNodeInInorder(currNode->left,N)
        count++;
        if(count == N){
            printf("%d",currNode->val);
            return;
        }
        NthNodeInInorder(currNode->right,N);
    }
    
}

int main(){

}