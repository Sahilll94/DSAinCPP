#include<iostream>
using namespace std;

int sum(int a, int b){
    int sumis=a+b;
    return sumis;
}

int main()
{

    int a;
    cout<<"Enter value a:";
    cin>>a;

    int b;
    cout<<"Enter value b:";
    cin>>b;

    int answer=sum(a,b);
    cout<<"The sum is:"<<answer<<endl;

}