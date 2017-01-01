//Doubly linklist print forward and reverse;
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head;//global declaration of head
struct Node *getnewnode(int x){
   struct Node *newnode=new Node();
   newnode->data=x;
   newnode->prev=NULL;
   newnode->next=NULL;
   return newnode;
  };
void InsertAtHead(int x){
   struct Node* newnode=getnewnode(x);
   if(head==NULL){
    head=newnode;
    return;
   }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
 }

 void Print(){
   struct Node *temp=head;
   cout<<"Forward: ";
   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
   }
   cout<<endl;
}
void ReversePrint(){
   struct Node* temp=head;
   if(temp==NULL) return;
   while(temp->next!=NULL){
    temp=temp->next;
   }
   cout<<"Reverse: ";
   while(temp!=NULL){
   cout<<temp->data<<" ";
   temp=temp->prev;
   }
   cout<<endl;
}

 int main(){
   head=NULL;
   InsertAtHead(2); Print(); ReversePrint();
   InsertAtHead(4); Print(); ReversePrint();
   InsertAtHead(6); Print(); ReversePrint();
   InsertAtHead(8); Print(); ReversePrint();
   InsertAtHead(9); Print(); ReversePrint();
  return 0;
 }

