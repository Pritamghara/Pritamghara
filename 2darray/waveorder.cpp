#include<iostream>
using namespace std;

void wave(int ar[][4],int m){
    for(int i=0;i<4;i++){
        
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout<<ar[j][i]<<" ";
                
            }
            else{
                cout<<ar[m-1-j][i]<<" ";
                

            }


        }
        cout<<endl;
    }
    
}

void wave2(int ar[][4],int m){
    for(int i=0;i<4;i++){
        if(i&1){
            for(int j=m-1;j>=0;j--){
                cout<<ar[j][i]<<" ";
            }
        }
        else{
            for(int j=0;j<3;j++){
                cout<<ar[j][i]<<' ';
            }
        }
        cout<<endl;

    }
   

}

int main(){
    int ar[3][4]={{1,2,3,5},{4,5,6,7},{7,8,9,1}};
    wave2(ar,3);

}