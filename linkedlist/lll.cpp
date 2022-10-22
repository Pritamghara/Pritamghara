#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next=NULL;
};

void inserts(node *&head,int d){
    node *temp=new node;
    
    temp->next=head;
    temp->data=d;
    head=temp;


}
void inserte(node *&tail,int d){
    node *temp=new node;
    
    tail->next=temp;
    tail->data=d;
    tail=temp;


}
void print(node *&head){
    node *t=head;
    
    while(t->next!=NULL){
        cout<<t->data;
        
        t=t->next;

    }
}

void insert(node *&head,node *&tail,int p,int d){
    
    if(p==1){
        
        inserts(head,d);
        return;

    }
    node *temp=new node;
    node *t=head;
    while(p-2>0){
        t=t->next;
        p--;

    }
    if(t->next==NULL){
        tail=t;
        
        inserte(tail,d);
        return;
    }
    
    temp->data=d;
    temp->next=t->next;
    t->next=temp;

}
int main(){
    // int d;
    // cout<<"enter data ";
    // cin>>d;
    node *first=new node;
    node*head=first;
    node*tail=first;
    inserts(head,1);
    inserts(head,2);

    // insert(head,tail,2,3);
    // insert(head,tail,1,5);
    // insert(head,tail,6,7);
    
    print(head);
    cout<<endl;       
    cout<<tail->data;
    
     


}