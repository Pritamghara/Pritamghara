#include<iostream>
using namespace std;


void colsum(int ar[][4],int m){
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum=sum+ar[j][i];

        }
        cout<<sum<<" ";
    }
}

int main(){
    int ar[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    colsum(ar,3);

}