#include<iostream>
#include<limits.h>

using namespace  std;

void largestrsum(int ar[][3], int m){
    int sum=INT_MIN;
    int res;
    int r;
    for(int i=0;i<m;i++){
        res=0;
        for(int j=0;j<3;j++){
            res=res+ar[i][j];
        }
        if(res>sum){
            sum=res;
            r=i;
        }
        
    }
    cout<<sum<<endl;
    cout<<r;
}

int main(){
    int ar[3][3]={{1,2,3},{4,5,6},{0,0,0}};

    largestrsum(ar,3);

    
}