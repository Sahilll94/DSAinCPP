#include<iostream>
using namespace std;

int main()
{
    //UNARY OPERATORS ++

    int a=5;
    cout<<a++<<endl;  //POST-INCREMENT (FIRST PRINT THEN INCREMENT THE OPERATOR)
    cout<<a<<endl;    //See operator a is incremented now

    int b=5;
    cout<<++b<<endl;  //PRE-INCREMENT (FIRST INCREMENT THE OPERATOR THEN PRINT)
    cout<<b<<endl;    //Incremented value will be shown

    int c=5;
    cout<<c<<endl;

    //UNARY OPERATOR --

    int d=5;
    cout<<d--<<endl; //POST-DECREMENT
    cout<<d<<endl;   //4

    int e=5;
    cout<<--e<<endl; //PRE-DECREMENT
    cout<<e;
}