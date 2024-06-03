#include<iostream>
using namespace std;

void solve(int &x,int&y){
    x=x+10; //20
    y=y-5;  //5
    return;
}

int main(){
    int a=10;
    int b=10;
    solve(a,b);
    a++; //21
    b--; //4
    cout<<(a*b)<<endl;
}