#include<iostream>
using namespace std;


class hero{
    private:
    int health;
    char *name;
    public:
    // self copy constructor
    hero(){
        name=new char[100];
    }
    // hero(hero temp){
    //     this->health=temp.health;

    // }
    hero(int health){
        this->health=health;
    }
    int gethealth(){
        return health;
    }
    char getname(char name[100]){
        this ->name=name;
    }
};
int main(){
    hero ramesh(90);
    // hero *a=new hero(ramesh);
    // cout<<a->gethealth();
    // hero ramesh(hero temp1);
    // cout<<temp1.health;
    char name;
    ramesh.getname("hello");
    

}