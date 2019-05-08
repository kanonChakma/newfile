#include<iostream>
using namespace std;
struct Node{
 int data;
 Node* next;
};
struct Node *head,*tptr;
void Insert(int item){
 Node* temp=new(Node);
 temp->data=item;
 temp->next=NULL;
 if(head==NULL){
    head=temp;
    tptr=temp;
 }
 else{
    tptr->next=temp;
    tptr=temp;
 }
}
void Reverse(){
 Node *current,*prev,*next;
 current=head;
 prev=NULL;
 while(current!=NULL){
    next=current->next;
    current->next=prev;
    current=next;
    prev=current;
 }
 head=prev;
}
void Print(){
  Node* temp=head;
  cout<<"The list is:";
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}

int main(){
    head=NULL;
    int item,n;
    cout<<"Enter the node number";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>item;
        Insert(item);
        Print();
}
Reverse();
Print();
return 0;
}

