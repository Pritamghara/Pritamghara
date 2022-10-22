#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter ";
    cin>>n;
    int *ar=new int[n];

    for(int i=0;i<n;i++){
        cin>>*(ar+i);
    }
    cout<<*ar;
    delete ar;
   


    
}