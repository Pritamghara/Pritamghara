// program to find element in 2d array by binary

#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int s=0;
    int e=8;
    int k=7;
    while(s<e){
        int mid=s+(e-s)/2;
        if (arr[mid/3][mid%3]==k){
            cout<<mid/3<<mid%3;
        }
        if(arr[mid/3][mid%3]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }




    }
    cout<<0;
}