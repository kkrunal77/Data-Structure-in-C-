//delete Nth element in link list

#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* head;
// insert data at end oh the element
void Insert(int data){
  Node* temp = new Node();
  temp->data=data;
  temp->next=head;
  head=temp;
}

void Print(){
    Node* temp=head;
     //cout<<"List="<<endl;
    while(temp!=NULL){
         cout<<" "<<temp->data;
         temp=temp->next;
    }
    cout<<endl;
}


void Delete(int n){
struct Node* temp1=head;// local variable
    if(n==1){
        head=head->next;
        delete temp1;
    }
    for(int i=0; i<n-2; i++){
       temp1=temp1->next;}
       struct Node* temp2=temp1->next;
       temp1->next=temp2->next;
       delete temp2;//free(temp2);in c programming

}

int main(){
    head-NULL;//node is empty
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(6);//list = 2 3 4 5 6
    Print();
    int n;
    cout<<"Enter position=";
    cin>>n;
    Delete(n);
    Print();

}
