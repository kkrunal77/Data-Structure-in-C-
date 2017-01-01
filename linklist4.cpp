//"reverse" link list
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;//in C++  Node *next;
};
struct Node *Reverse(struct Node* head){
     struct Node *current,*prev,*next;//in C++ Node *current,*prev,*next;
     current=head;
     while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
     }
      head=prev;
      return head;
}
Node* Insert(Node* head,int data){
     Node *temp=new Node();
     temp->data=data;
     temp->next=NULL;

     if(head==NULL){
        head=temp;}
     else{
        Node* temp1=head;
        while(temp1->next!=NULL)
           {temp1=temp1->next;}
            temp1->next=temp;
     }
     return head;

}

void Print(Node* head){
    while(head!=NULL){
        //if(head->data==NULL) break;
        cout<<head->data<<" ";
         head=head->next;

    }
}

int main(){
    struct Node *head=NULL;
    head=Insert(head,2);
    head=Insert(head,0);
    head=Insert(head,6);
    head=Insert(head,8);
   // head=Insert(head,0);
    cout<<"The list =";
    Print(head);
    cout<<endl;
    cout<<"Reverse list =";
    head=Reverse(head);
    Print(head);
    return 0;

}
