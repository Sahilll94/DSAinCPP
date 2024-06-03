#include<iostream>
using namespace std;

int main()
{
    int num1=10;
    float num2=5.5;
    float answer = num1+num2; //why float? bcoz datatype of answer variable is float and it is more precise
    cout<<answer<<endl;


    int num3=20;
    float num4=2.5;
    int value=num3+num4; //Why 22? bcoz the datatype of value variable is INT
    cout<<value<<endl;
    

    char a='a'; //ASCII value
    int b=a+1;  //ASCII VALUE + 1
    cout<<b<<endl;

    char d='a'; 
    char c=a+1;  //CHAR datatype
    cout<<c<<endl;

    int e=97;
    char f=e;
    cout<<f<<endl;

    return 0;
}