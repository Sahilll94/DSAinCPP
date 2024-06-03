#include<iostream>
using namespace std;

int main()
{
    // CONVERTING FLOAT VARIABLE TO INT 
    // int a=10;
    // float b=5.5;
    // float value=a+(int)b;
    // cout<<value<<endl;

    // CONVERTING DOUBLE PI VALUE INTO INT 
    // double pi=3.14159265;
    // int intergerpi=(int)pi;
    // cout<<intergerpi<<endl;

    //CONVERTING FLOAT TO CHAR
    // float character=65.60;
    // char a=(char)character;
    // cout<<a<<endl;  //A WILL BE PRINTED SINCE ASCII VALUE OF 65 IS "A"

    //As int/int = int, int/float=float and float/int=float as we will give precidency to FLOAT over INT Always
    // int a=10;
    // int b=10;
    // float c=a/b; //as you can see this is FLOAT but it is giving int value in the output, now we will explicitly by own will change the value of "b" variable
    // cout<<c<<endl;

    int a=10;
    float b=5.55;
    float c=a/b;
    cout<<c<<endl;

    
    return 0;
}