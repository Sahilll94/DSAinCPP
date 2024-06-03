#include<iostream>
using namespace std;

int solve(int val){
    val=val+10;
    return val;
}

int main(){
    int val=10;


    int c=solve(val);
    cout<<val<<"\n";
    cout<<c;
}