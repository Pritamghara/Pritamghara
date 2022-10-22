#include<iostream>

using namespace std;


class Time{
    public:
    int hour;
    int min;
    int sec;
    void input();
    void add(Time t1,Time t2);
    void show(Time);
};
class detail{
    public:
    char name[10],add[10];
    int age;
    float salary;
    void input();
    void show();
};
void detail::input(){
    cout<<"enter name ";
    cin>>name;
    cout<<"enter address ";
    cin>>add;
    cout<<"enter salary ";
    cin>>salary;
    cout<<"enter age ";
    cin>>age;

}
void detail::show(){
    cout<<"Details are \n";
    cout<<"name is "<<this->name<<endl;
    cout<<"adress is "<<this->add<<endl;
    cout<<"age is "<<this->age<<endl;
    cout<<"salary is "<<this->salary;

}
void Time::input(){
    int hour,min,sec;
    cout<<"Enter Time :";
    cin>>hour>>min>>sec;
    this->hour=hour;
    this->min=min;
    this->sec=sec;
    
}
void Time::add(Time t1,Time t2){
    hour=t1.hour+t2.hour;
    min=t1.min+t2.min;
    sec=t1.sec+t2.sec;

    cout<<"TIME IS : ";
    cout<<this->hour<<":"<<this->min<<":"<<this->sec<<endl;
}


int main(){
    Time t1,t2,t3;
    cout<<"pritam ghara\n";
    cout<<"104-it-c\n";
    t1.input();
    t2.input();
    t3.add(t1,t2);
    detail d1;
    cout<<"next program -> "<<endl;
    d1.input();
    d1.show();
    

}