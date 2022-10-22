#include<iostream>

using namespace std;

inline void test(int &a){
    cout<<(a==4)? 1:false;
    cout<<(a==5)? 4:6;
    cout<<(a==3)? 2:1;
    cout<<(a==1)? 2:1;

    
}
int main(){
    int a=5;
    test(a);

}