#include<iostream>
using namespace std;


class hero{
    public:
    
    int rating;
    public:
    int getrating(){
        return rating;
    }
    
    
    void setrating(int num){
        rating=num;
    }
};


int main(){

    hero *b=new hero;
    b->setrating(90);
    cout<<b->getrating();
    
}