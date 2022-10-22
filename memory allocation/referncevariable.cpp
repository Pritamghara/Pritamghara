#include<iostream>
using namespace std;

int update(int &j){
    ++j;
    return j;

}

int main(){
    int i=5;
    cout<<i;
    cout<<update(i);
    // cout<<++i<<" " <<j;
}