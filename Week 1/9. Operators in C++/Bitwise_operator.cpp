#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 5;

    //& operator which MULTIPLY
    cout<<"& Operator output: "<<(a&b)<<endl;

    // | operator which check whether there is a true then it will give output as true
    cout<<"| Operator output: "<<(a|b)<<endl;

    // ~ Operator which act as NOT ! and do the opposite of the given number in bit
    cout<<"~ Operator output: "<<(~-4)<<endl;

    // << LEFT SHIFT Operator
    cout<<"<< Left Shift operator: "<<(10<<4)<<endl;
    
    //>> RIGHT SHIFT Operator
    cout<<" >> Right shift operator: "<<(100>>3)<<endl;

    //^ XOR operator also called opposite of OR operator 
    cout<<"^ XOR operator: "<<(a^a)<<endl;
    cout<<"^ 2nd XOR operator: "<<(5^5)<<endl;
    cout<<"^ 3rd XOR operator: "<<(a^b)<<endl;
}