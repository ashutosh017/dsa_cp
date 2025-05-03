#include<iostream>
using namespace std;

class Geeks
{
private:
    /* data */
public:
    // Geeks(/* args */);
    // ~Geeks();
    string geekName;
    int id;
    void printName(){cout<<"Geek name is: "<<geekName<<endl;}
    void printId();
    void fun1(){cout<<"I am a funny function"<<endl;}
    void fun2(int x){cout<<"I print the value of x which is: "<<x<<endl;}
};
void Geeks::printId(){
    cout<<"Enter geek id: ";
    cin>>id;
    cout<<"Geek id is: "<<id<<endl;
}


int main(){
    Geeks geek1;
    geek1.geekName = "Ashutosh";
    geek1.printName();
    geek1.printId();
    geek1.fun2(4);
    geek1.fun1();
    
    return 0;
}