#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,2,1,0};
    int s=0;
    int e=5;
    int mid;
 
    while(e>=s){
        int mid=s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }

    }
    cout<<mid;
    return 0;
}