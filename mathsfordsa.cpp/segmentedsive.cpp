#include<iostream>
#include<vector>
#include<math.h>
using  namespace std;
int main(){
    int n=30;
    int r=float(sqrt(n));
    vector<bool> res(r+1,true);

    vector<int >arr;
    res[0]=res[1]=false;
    for(int i=2;i<r+1;i++){
        if(res[i]){
            
            
            arr.push_back(i);
            for(int j=2*i;j<r+1;j+=i){
                res[j]=false;
            }
        }


    }
    for(int i=0;i<arr.size();i++){
        
    }

  
  



    
}