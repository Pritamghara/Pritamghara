#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next=NULL;
    
};
void inserts(node *&head){
    int data;
    cout<<"enter data ";
    cin>>data;
    node*temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;


}
void print(node* &head){
    node*temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        cout<<temp->next<<endl;
        temp=temp->next;
    }

void dele(int pos,node *&head,node*&tail){
    node*temp=head;
}
// void del(node *&head){
//     node*temp=head;
//     head=head->next;
//     temp->next=NULL;
//     delete temp;



// }
void dele(node*&tail,node*&head){
    node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
    
}

int main(){
    node*first=new node;
    node*head=first;
    node *tail=first;
    inserts(head);
    inserts(head);
    
    dele(tail,head);
    print(head);
    

}