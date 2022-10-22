#include<iostream>
using namespace std;

bool search(int *ar,int size,int t,int i){
    if(i>=size){
        return false;
    }
    int mid=i+(size-i)/2;
    if(ar[mid]==t){
        return true;

    }
    if(t<ar[mid]){
        
        return search(ar,mid-1,t,i);
    }
    else{
        return search(ar,size,t,mid+1);
        
    }



}

int main(){
    int ar[5]={1,2,3,4,5};
    cout<<search(ar,4,10,0);

}