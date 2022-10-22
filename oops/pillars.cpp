#include<iostream>
using namespace std;


// class hero{
//     private:
//     string name;
//     int age;
//     int rno;
//     public:
//     hero(string name,int age,int rno){
//          this->name=name;
//          this->age=age;
//          this->rno=rno;

//     }
//     void getdata(){
//         cout<< this->name;
//         cout<< this->age;
//         cout<< this ->rno;
//     }
// };


// inheritence
class human{
    public:
    string name;
    int height;
    int weight;
};
class male:public human{
    static char sex;
};
char male:: sex='m';









int main(){
    male *aman =new male;
    aman->name="naveen";
    cout<<aman->name;
    delete aman;



}