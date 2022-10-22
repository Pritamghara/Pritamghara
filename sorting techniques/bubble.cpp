#include<iostream>

using namespace std;

int main(){
    
    int arr[5]={1,2,3,4,5};
    for (int i=0;i<5-1;i++){
        int count=0;
        for(int j=0;j<5-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }
        if (count==0){
            break;
        }
    }
    for (int k=0;k<5;k++){
        cout<<arr[k]<< " ";

    }
}