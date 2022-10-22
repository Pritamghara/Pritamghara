#include<iostream>
using namespace std;

int main(){
    int arr[6]={7,9,10,1,2,3};
    int s=0;
    int e=5;
    int mid=s+(e-s)/2;
    while(s<=e){
        int mid=s+(e-s)/2;
        if (arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    cout<<arr[mid];
    cout<<"hello";
    
    return 0;
}