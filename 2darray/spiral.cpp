#include<iostream>
#include<vector>
using namespace std;

void spiral(int ar[][3],int m){

    
}

int main(){
    vector<vector<int>> arr={{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    vector<int> ans;
    int row=arr.size();
    int col=arr[0].size();
    int t=row*col;
    int count=0;
    // nothing;
    int sr=0;
    int sc=0;
    int ec=col-1;
    int er=row-1;
    while(count<t){
        for(int i=sc;count<t && i<=ec;i++){
            cout<<arr[sr][i];
            count++;
        }
        sr++;
        for(int i=sr;count<t && i<=er;i++){
            cout<<arr[i][ec];
            count++;
        }
        ec--;
        for(int i=ec;count<t && i>=sc;i--){
            cout<<arr[er][i];
            count++;
        }
        er--;
        for(int i=er;count<t && i>=sr;i--){
            cout<<arr[i][sc];
            count++;
        }
        sc++;

    }

}