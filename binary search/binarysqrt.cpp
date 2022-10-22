#include<iostream>
using namespace std;

float more(int n,float a){
    float s=1;
    
    for (int i=0;i<6;i++){
        s=s/10;
        for (float j=a;j*j<=n;j=j+s){
            a=j;
            
        }
    }
    return a;
    

}

int main(){
    int n,a;
    cout<<"enter number";
    cin>>n;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if (mid*mid==n){
            a=mid;
        }
        else if(mid*mid<n){
            a=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    
    }
   
    cout<<more(n,a);

}