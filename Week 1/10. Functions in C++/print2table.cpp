#include<iostream>
using namespace std;


// n -> input parameter
void table(int n){

    for(int i=1;i<=10;i++)
    {
        cout<<n*i<<endl;
    }    

    // return ;

}


int main()
{
    int n;
    cout<<"Enter the number you wish to see multiplication table from 1-10: ";
    cin>>n;
    
    //n-> argument
    table(n);
}