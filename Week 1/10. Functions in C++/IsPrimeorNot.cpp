#include<iostream>
using namespace std;


bool prime(int x){
    for(int i=2;i<=x-1;i++){
        if(x%i==0){
            return false;
        }

    }
    return true;
}



int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    bool n= prime(number);

    if(n==true){
        cout<<"The number is prime"<<endl;
    }
    else{
        cout<<"The number is not prime"<<endl;
    }
}