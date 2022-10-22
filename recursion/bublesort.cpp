#include<iostream>
using namespace std;

void sorti(int *ar,int j){
    if(j==0 || j==1){
        return ;

    }
  
    for(int i=0;i<=j;i++){
        if(ar[i+1]<ar[i]){
            swap(ar[i+1],ar[i]);
        }
    }

    sorti(ar,j-1);


}

int main(){
    int ar[5]={4,1,5,2,3};
    sorti(ar,4);
    for(auto i:ar){
        cout<<i<<" ";
    }


}