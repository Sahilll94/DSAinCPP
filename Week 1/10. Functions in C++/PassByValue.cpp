#include<iostream>
using namespace std;

int solve(int a){
    a++; //16
    return a;
}

int main(){
    int a=15;
    a++; //16

    int c=solve(a);
    cout<<c;

    a++; //17
    cout<<"\n"<<a;



    return 0;
}