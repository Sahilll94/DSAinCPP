#include<iostream>
#include<cmath>
using namespace std;

int Binarytodecimal(int n)
{
    int decimal=0;
    int i=0;
    while(n>0){
        int bit=n%10;
        decimal=decimal+bit*pow(2,i++);
        n=n/10;
    }
    return decimal;
}

int main()
{
    int binaryno;
    cout<<"Enter the binary number:";
    cin>>binaryno;

    int a;
    a=Binarytodecimal(binaryno);
    cout<<a;
}