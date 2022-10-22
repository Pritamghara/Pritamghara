#include<iostream>
using namespace std;

int update(int *p){
    (*p)++;
    cout<<*p<<endl;
    
    
}

int main(){
    int i=9;
    int *p=&i;
    cout<<*p;
    update(p);
    int ar[6]={1,2,3,4,5,6};
    cout<<*ar;
}