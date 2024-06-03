#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b=20;
    int &x=a;
    int &y=b;
    b--; //19
    x++; //11
    cout<<(a*b)<<endl;
}