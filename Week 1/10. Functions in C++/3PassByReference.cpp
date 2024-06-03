#include<iostream>
using namespace std;

int solve(int &a){
    a=a+10;
    return a;
}

int main(){
    int a=10;
    a++;
    int b=solve(a);
    a++;
    cout<<a<<endl; //22
    cout<<b;
}