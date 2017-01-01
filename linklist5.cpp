//print & reverse all element using "recursion" in linklist;
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void Print(struct Node* p)//p is local variable
{
    if(p==NULL) return;//exit condition
    cout<<p->data<<" ";//first print the value in the node
    Print(p->next);//recursive call
    //cout<<p->data<<" ";
}
void ReversePrint(struct Node* p)//p is local variable
{
    if(p==NULL) return;//exit condition
    //cout<<p->data<<" ";//first print the value in the node
    ReversePrint(p->next);//recursive call
    cout<<p->data<<" ";
}

struct Node *Insert(Node *head,int data)
{
    Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){head=temp;}
    else{
        Node *temp1=head;
        while(temp1->next!=NULL){
             temp1=temp1->next;
        }
        temp1->next=temp;
    }
    return head;
};
int main(){
    struct Node* head=NULL;
    head = Insert(head,2);
    head=Insert(head,4);
    head=Insert(head,6);
    head=Insert(head,5);
    cout<<"Inserted element = ";
    Print(head);
    cout<<"\nReverse  element = ";
    ReversePrint(head);


}
