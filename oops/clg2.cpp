#include<iostream>
#include<math.h>

using namespace std;


class func{
    public:
    
    void fact();
    void fibo();
    void powe();
};
void func::fibo(){
    int n;
    cout<<"enter number ";
    cin>>n;
    int a=0;
    int b=1;
    int c;
    cout<<"fibonaci number of "<<n<<" position is ";
    while(n!=0){
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    
    cout<<c<<endl;
    
}

void func::fact(){
    int n;
    cout<<"enter number ";
    cin>>n;
    int f=1;
    cout<<"factorial of "<<n<<" is ";
    while(n!=1){
        f=f*n;
        n--;
    }
    cout<<f<<endl;
}

void func::powe(){
    double m;
    int n;
    cout<<"enter base ";
    cin>>m;
    cout<<"enter power ";
    cin>>n;
    cout<<"result is "<<pow(m,n);
}


int main(){
    cout<<"PRITAM GHARA\n";
    cout<<"104-it-c\n";
    func f1;
    cout<<"FACTORIAL PROGRAM-> \n";
    f1.fact();
    cout<<"FIBONACI PROGRAM-> \n";
    f1.fibo();
    cout<<"POWER PROGRAM-> \n";
    f1.powe();
    
}