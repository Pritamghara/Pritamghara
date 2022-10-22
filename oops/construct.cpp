#include<iostream>
using namespace std;

class hero{
    private:
    char name;
    int health;
    // hero(){
    //     cout<<"hi";
    // }
    // hero(int health){
    //     this->health=health;
    // }
    public:
    void getname(){
        cout<<name;
    }
    void setname(char name){
        this->name=name;
    }
};

int main(){
    hero ramesh;
    ramesh.setname('a');
    ramesh.getname();
    // hero *h=new hero;
    

}