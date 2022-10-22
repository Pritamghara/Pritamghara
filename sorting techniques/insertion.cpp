#include<iostream>
using namespace std;

        // int ar[5]={3,1,2,5,4};
void sorti(int *ar,int s){
    for (int i=1;i<s;i++){
        int temp=ar[i];
        for(int j=i;j>0;j--){
     
          
            if(ar[j]<ar[j-1]){
               
                ar[j]=ar[j-1];
                ar[j-1]=temp;
                
            }
            else{
                break;
            }
        }
    }
}

int main(){
    int ar[5]={3,1,2,5,4};
    sorti(ar,5);
    for(auto i: ar){
        cout<<i<<" ";
    }

}