#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
struct node*head;


void insert(){
    int d;
    printf("enter data ");
    scanf("%d",&d);
 
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->next=head;
    temp->data=d;
    head=temp;

}
void print(){
    struct node*temp=head;
    while(temp->next!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    head = (struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    for(int i=0;i<4;i++){
        insert();
    }
    printf("elements are ");
    print();

    


}