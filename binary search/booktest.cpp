#include<iostream>

#include<algorithm>
using namespace std;

bool res(int ar[],int mid,int n,int k){
    int count=1;
    int sum=ar[0];
    for (int i=0;i<n;i++){
        if(ar[i]-sum>=mid){
            count++;
            if(count==k){
                return true;
            }
            sum=ar[i];
        }
    }
    return false;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    int e=-1;
    int ans=-1;
    for (int i=0;i<6;i++){
        if (arr[i]>e){
            e=arr[i];

        }
    }
    int s=0;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(res(arr,mid,6,3)){
            ans=mid;
            s=mid+1;

        }
        else{
            e=mid-1;

        }

    }
    cout<<ans;
}