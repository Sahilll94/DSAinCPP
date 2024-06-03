#include<iostream>
using namespace std;



void EvenNumber(int f,int l){
    for(int i=f;i<=l;i=i+2){
        cout<<i<<"\n";
        
    }
}

int main(){

    int first;
    cout<<"Enter the initial number: ";
    cin>>first;

    int last;
    cout<<"Enter the last number: ";
    cin>>last;

    EvenNumber(first,last);

    return 0;
}