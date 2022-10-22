#include<iostream>

using namespace std;

int main(){
    int i=6;
    int *p=&i;
    int **pr=&p;

    cout<<pr<<" "<<p;
}