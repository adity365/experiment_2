// code for storage class

#include<iostream>
using namespace std;

extern int extern_variable =30;


int main()
{
    auto a = 8;
    register int registered_variable = 100;
    static int s = 7;
    cout << "The local variable: "<< a << std::endl;
    cout <<"The variable in register: "<<registered_variable<<endl;
    std::cout<<"External variable: "<<extern_variable<<endl;
    s = 10;
    cout<<"The static variable: "<<s<<endl;

}
