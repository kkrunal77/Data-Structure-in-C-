#include<conio.h>
using namespace std;

void main(){
    struct Node{
        int data;
        Node *next;
    }
       // inserting node at position(n);
        Insert(int data,int n){
            Node *temp=new Node();
            temp->data=data;
            temp->next=NULL;
            if(n==1){
                temp->next=head;
                head=temp;
                return;
            }
            Node *temp1=head;
            for(int i=0; i<n-2; n++){
                next=temp1->next;
            }
            temp->next=temp1->next;
            temp1->next=temp;
        }

        Delete(int n){
            struct Node *temp1=head;//local variable;
          if(n==1){
            head=head->next;
            delete temp1;
            }
          for(int i=0;i<n-2;i++){
            temp1=temp1->next;
            }
           struct Node *temp2=temp1->next;
           temp1->next=temp2->next;
           delete temp2;
        }

        struct Node *Reverse(struct Node *head){
              struct Node *prev, *next, *curr;
              curr=head;
              while(curr!=NULL){
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
              }
              prev=head;
              return head;
        };

    //print data from start to end;
    print(Node *head){
        while(temp!=NULL){
                cout<<Node->data<<" ";
                temp1->next=next;
            }
    }
    void Print(struct Node *p){
        if(p==NULL){
            return;
        }
        cout<<p->data<<" ";
        Print(p->next);
    }
    void print_Reverse(struct Node *p){
        if(p==NULL){return;}
        print_Reverse(p->next);
        cout<<p->data<<" ";
    }

}
