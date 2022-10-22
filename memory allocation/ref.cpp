#include<iostream>
using namespace std;

void ref(int& j,int& h){
    int ans;
    ans=(j>h) ? j:h;
    cout<<ans;

}
int main(){
    int a=5,b=6;
    ref(a,b);

}