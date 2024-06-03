#include<iostream>
using namespace std;

int main(){
    
    //declaration of number
    int age;
    cout<<age<<endl;

    age=20;
    cout<<age<<endl;

    //manipulatiion of data
    age=40;
    cout<<age<<endl;

    //int declaration and initilisation
    int a=20;
    a=40;
    {
        int a=50;
        cout<<"The value of a in this scope is:"<<a<<endl;
    }

    //float declaration and initilisation
    float b=2.2;

    //char declaration and initilisation
    char Name='s';

    //double declaration and initilisation
    double weight=55.9203;

    //boolean declaration and initilisation
    bool ismale=true;
    bool isfemale=0;
    bool ischild=false;
    bool isgirl=1;

    //Printing the values
    cout<<"value of a is:"<<a<<endl;
    cout<<b<<endl;
    cout<<Name<<endl;
    cout<<weight<<endl;
    cout<<ismale<<endl;


    //check datatype size
    cout<<"The size of int is:"<<sizeof(int)<<endl;
    cout<<"THe size of char is:"<<sizeof(char)<<endl;
    cout<<"The size of boolean is:"<<sizeof(bool)<<endl;
    cout<<"The size of float:"<<sizeof(float)<<endl;
    cout<<"The size of double:"<<sizeof(double)<<endl;
    cout<<"The size of long double:"<<sizeof(_LONGDOUBLE)<<endl;


    return 0;
}