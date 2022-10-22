#include<iostream>

using namespace std;

string ch(string *s){
    return s;
}
int main(){
    string s="abcde";

    cout<<ch(s);
    
}