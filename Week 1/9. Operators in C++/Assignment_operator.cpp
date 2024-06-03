#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    //a=a+10;
    a+=10;
    cout<<"A:"<<a<<endl;

    int b = 5;
    //b=b-4;
    b-=4;
    cout<<"B:"<<b<<endl;

    int c= 10;
    // c=c*10;
    c*=10;
    cout<<"C:"<<c<<endl;

    int d = 20;
    // d=d/10;
    d/=10;
    cout<<"D:"<<d<<endl;

    int e=20;
    e=e%15;
    cout<<"E:"<<e<<endl;
}