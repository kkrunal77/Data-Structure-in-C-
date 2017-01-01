//Tree All operation.

#include <iostream>
using namespace std;
struct BstNode{
   int data;
   BstNode *left;
   BstNode *right;
};



  BstNode *GetnewNode(int data){
     BstNode *newNode = new BstNode();
      //=(*BstNode)malloc(sizeof(BstNode));
      newNode->data=data;
      newNode->left=NULL;
      newNode->right=NULL;
     return newNode;
  }



  BstNode* Insert(BstNode *root, int data){
       if(root==NULL){
        root = GetnewNode(data);
        return root;
       }
       else if(data<=root->data){
        root->left=Insert(root->left,data);
       }
       else {
         root->right=Insert(root->right,data);
       }
       return root;
  }



  int FindMin(BstNode *root){
      if(root == NULL){
        cout<<"Empty BST";
        return -1;
      }
      BstNode *current=root;
      while(current->left != NULL){
        current=current->left;
      }
      return current->data;
  }




  int FindMax(BstNode *root){
      if(root == NULL){
        cout<<"Empty BST";
        return -1;
      }
      //BstNode *current=root;
      while(root->right != NULL){
        root=root->right;
      }
      return root->data;

  }




  BstNode *Delete(BstNode *root, int data){
       if(root==NULL){
        return root;
       }
       else if(data < root->data){root->left=Delete(root->left, data);}
       else if(data > root->data){root->right=Delete(root->right, data);}
       else{
            //case 1- No child
               if(root->left == NULL && root->right == NULL){
                   delete root;
                   root=NULL;
                }
            //case 2- One child
               else if(root->left == NULL){
                    BstNode *temp=root;
                    root=root->right;
                    delete temp;
                }
               else if(root->right == NULL){
                    BstNode *temp=root;
                    root=root->left;
                    delete temp;
                }
             //Case 3- Two child
               else{
                    int temp = FindMin(root->right);
                    root->data=temp;
                    root->right=Delete(root->right,temp);
               }

            }

       return root;
  }



  bool Search(BstNode* root, int data){
     if(root==NULL){return false;}
     else if(root->data == data){ return true;}
     else if(data<=root->data)  { return Search(root->left, data);}
     else {return Search(root->right,data);}
  }




  void Preorder(BstNode *root){
     if(root==NULL){
        return;
     }
     cout<<root->data<<" ";
     Preorder(root->left);
     Preorder(root->right);
  }



  void Inorder(BstNode *root){
    if(root==NULL){ return;}
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
  }



  void Postorder(BstNode *root){
    if(root==NULL){return;}
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
  }


int main(){
 BstNode *root=NULL;
 root=Insert(root, 15);
 root=Insert(root, 14);
 root=Insert(root, 17);
 root=Insert(root, 16);
 root=Insert(root, 11);
 root=Insert(root, 18);
 root=Insert(root, 13);
 root=Insert(root, 12);
 root=Insert(root, 15);
 /*int num;
 cout<<"Enter a Number"<<endl;
 cin>>num;
 if(Search(root, num)==true){
    cout<<"Found"<<endl;
 }
 else{
    cout<<"Not Found";
 }*/
 Preorder(root);
 cout<<endl;
 Inorder(root);
 cout<<endl;
 Postorder(root);
 root=Delete(root, 12);
 cout<<endl;
 Inorder(root);

cout<<"\nMIN = "<<FindMin(root)<<endl;
cout<<"MAX = "<<FindMax(root)<<endl;

return 0;
}
