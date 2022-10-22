#include<iostream>
using namespace std;

int main(){
    int i=5;
    int *p=0;
    p=&i;
    (*p)++;
    // cout<<*p<<endl;
    int *q=p;
    p++;
    cout<<*p<<endl;
    cout<<q;
    
}