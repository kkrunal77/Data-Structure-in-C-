
#include <iostream>

using namespace std;


struct Node{
  int data;
  Node* next; //struct Node* next;
};

struct Node* head;
//inserting from beginning;
void Insert(int x){
  Node* temp = new Node();
  temp->data=x;
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

int main()
{

    head = NULL;//empty list
    int n,x;
    cout<<"How many numbers=";
    cin>>n;
    for(int i=0; i<n; i++){
        //cout<<"num"<<i<<endl;
        cin>>x;
        Insert(x);
        cout<<"List =";
        Print();
    }
    return 0;
}
