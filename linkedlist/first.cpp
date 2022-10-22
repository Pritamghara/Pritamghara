#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next=NULL;
    

};
void inserts(node *&head){
    node *temp=new node;
    int d;
    cout<<"enter data ";
    cin>>d;
    
    temp->data=d;
    temp->next=head;
    head=temp;

}
void read(node *&head){
    node *temp=head;
    
    while(temp->next!=NULL){
        
        cout<<temp->data;
        
        temp=temp->next;
    }
    
}
void inserte(node *&tail){
    node *temp=new node;
    int d;
    cout<<"entr data ";
    cin>>d;
    tail->data=d;
    tail->next=temp;
    tail=temp;
}
void insertm(node *&head){
    node *temp=new node;
    node*t=head;
    int c,d;
    cout<<"enter position ";
    cin>>c;
    cout<<"enter data ";
    cin>>d;
    temp->data=d;
    while(c>0){

        t=t->next;
        c--;

    }
    temp->next=t->next;
    t->next=temp;
    

}
int main(){
    node *first=new node;
    node *head=first;
    node *tail=first;
    for(int i=0;i<4;i++){
        inserts(head);
    }
    insertm(head);
    read(head);
    

    
    



}