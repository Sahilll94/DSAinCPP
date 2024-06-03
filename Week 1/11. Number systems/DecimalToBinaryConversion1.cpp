#include<iostream>
using namespace std;

int decimaltobinary(int num)
{
    //division method
    while(num>0){
        int bit = num % 2;
        cout<<bit<<endl;
        num=num/2;

    }
    return 0;
}

int main()
{
    int num;
    cout<<"Enter the decimal number:";
    cin>>num;

    int answer=decimaltobinary(num);
    
}