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
void Print(){
  Node* temp=head;
  cout<<"The list is:";
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;
}
void Delete(int pos){
  Node* temp1=head;
  if(pos==1){
    head=temp1->next;
    delete temp1;
    return;
     }
 for(int i=0;i<pos-2;i++){
    temp1=temp1->next;
  }
  Node* temp2=temp1->next;
  temp1->next=temp2->next;
  delete temp2;
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
    int pos;
    cout<<" enter position";
    cin>>pos;
    Delete(pos);
    Print();
return 0;
}
