#include<bits/stdc++.h>
using namespace std;


void mirror(struct Node *currentNode)
{   if(currentNode){
        mirror(currentNode->left);
        mirror(currentNode->right);
        struct Node* t;
        t = currentNode->left;
        currentNode->left =  currentNode->right;
        currentNode->right = t; 
    }
}

int main(){
    
    return 0;
}