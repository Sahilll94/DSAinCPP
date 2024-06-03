#include<iostream>
using namespace std;

void solve(int &number){
    number=number/2;
    return;
}


int main(){
    int val=10;
    solve(val);
    val=val+100;
    cout<<val;
}