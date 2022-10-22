#include<iostream>

using namespace std;

int fi(int ar[][3],int target,int m){
    for (int i=0;i<m;i++){
        for(int j=0;j<3;j++){
            if(ar[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int ar[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<fi(ar,0,3);
    
}