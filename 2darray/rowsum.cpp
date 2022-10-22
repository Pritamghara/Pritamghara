#include<iostream>
using namespace std;

void s(int ar[][3],int m){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=ar[i][j];
            
        }
        cout<<sum<<endl;
    }


}

int main(){
    int ar[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    s(ar,3);


    
}