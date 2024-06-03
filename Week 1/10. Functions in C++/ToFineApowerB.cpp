#include<iostream>
using namespace std;


int Calculate(int a, int b){


    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    return ans;
}

int main(){

    int a=2;
    int b=2;

    int c=Calculate(a,b);
    cout<<c;
}