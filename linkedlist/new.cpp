#include<iostream>
using namespace std;



class node{
    public:
    int data;
    node *next=NULL;
    
};


void insert(node * &head,int d){

    node *temp=new node;
    cout<<"enter data :";
    cin>>d;
    temp->data=d;
    temp->next=head;
    head=temp;



}

void print(node *&head){
    node *temp=head;

    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}
void deleten(node *&head){
    node *temp=head;
    head=temp->next;
}
void insertend(node *&tail,int d){
    node *temp=new node;
    cout<<"enter ";
    cin>>d;
    tail->data=d;
    tail->next=temp;
    tail=temp;


}
int main(){
    node *first=new node;
    node *head=first;
    node *tail=first;
    int data;
    
    for(int i=0;i<4;i++){
        insert(head,data);
    }
    print(head);


    


    
    

}