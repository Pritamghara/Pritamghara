#include<iostream>

using namespace std;


class hero1{
    private:
    int health;
    char name;
    // use of static for keep a value all over the program

    public:
    static int level;
    hero1(int health,char name){
        this->health=health;
        this->name=name;
    }
    void getname(){
        cout<<this->name;
    }


};
int hero1::level=6;

int main(){
    // hero1 tony(90,'a');
    // hero1 cap(100,'b');
    // tony=cap;
    // tony.getname();
    cout<<hero1::level;


}