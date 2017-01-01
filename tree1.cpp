
//serching element from bst

#include <iostream>
using namespace std;

struct BstNode{
 int data;
 BstNode* left;
 BstNode* right;
};

BstNode* GetnewNode(int data){
  BstNode* newNode = new BstNode();
  newNode->data=data;
  newNode->left=NULL;
  newNode->right=NULL;
 return newNode;
}

BstNode* Insert(BstNode* root, int data){

    if(root==NULL)
    { root=GetnewNode(data);}

    else if(root->data>=data)
        {root->left=Insert(root->left, data);}

    else{root->right=Insert(root->right,data);}

    return root;
}
bool Serch(BstNode* root,int data){
    if(root==NULL)
        return false;
    else if(root->data==data) return true;
    else if(data <= root->data) return Serch(root->left,data);
    else return Serch(root->right,data);
}


int main(){
   BstNode *root=NULL;
   root=Insert(root, 15);
   root=Insert(root, 10);
   root=Insert(root, 20);
   root=Insert(root, 25);
   root=Insert(root, 8);
   root=Insert(root, 12);
   int n;
   cout<<"Enter a num "<<endl;
   cin>>n;
   if(Serch(root, n)==true)
    cout<<"found"<<endl;
   else
    cout<<"not found"<<endl;






return 0;
}
