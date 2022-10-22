#include<iostream>

using namespace std;
int main(){
    int arr[3]={1,2,3};
    int ar[4]={2,3,4,5};
    int res[7]={};
    int i=0;
    int j=0;
    int n=0;
    while(i<3 && j<4){
        if(arr[i]>ar[j]){
            res[n]=ar[j];
            j++;
            n++;
        }
        else if(arr[i]<ar[j]){
            res[n]=arr[i];
            n++;

            i++;

        }
        else{
            res[n]=arr[i];
            res[n+1]=ar[j];
            i++;
            j++;
            n+=2;
            
        }
    }
    if(4>3){
        for(int k=j;k<4;k++){
            res[n]=ar[k];
            n++;
        }

    }
    else{
        for(int k=i;k<3;k++){
            res[n]=arr[k];
            n++;
        }
    }
    
    
    for (int k=0;k<7;k++){
        cout<<res[k];
    }

}