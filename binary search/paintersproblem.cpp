#include<iostream>
using namespace std;

bool check(int ar[],int size,int m,int mid){
    int num=1;
    int sum=0;
    for (int i=0;i<size;i++){
        if (sum+ar[i]<=mid){
            sum+=ar[i];
        }
        else{
            num++;
            if (num>m || ar[i]>mid){
                return false;

            }
            sum=ar[i];



        }
    }
    return true;
}

int main(){
    int arr[4]={5,5,6,6};
    int n=2;
    int s=0;
    int e=0;
    int ans;
    for(int i=0;i<4;i++){
        e+=arr[i];

    }
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if (check(arr,4,n,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans;

}