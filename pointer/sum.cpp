#include<iostream>

using namespace std;

int sum(int ar[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=*ar+i;

    }
    return sum;
}

int main(){
    int ar[5]={1,2,3,4,5};
    cout<<sum(ar+2,3);


}