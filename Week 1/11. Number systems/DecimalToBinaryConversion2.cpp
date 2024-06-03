#include<iostream>
using namespace std;

int decimaltobinary(int num)
{
    //Bitwise method
    while(num>0){
        int bit = num & 1;
        cout<<bit<<endl;
        num=num>>1;

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