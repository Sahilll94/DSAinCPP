#include<iostream>
using namespace std;


bool CanVote(int x){
    if(x<=18){
        return false;
    }
    return true;
}

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    

    if(bool n=CanVote(age)){                //This is being true
        cout<<"Can vote"<<endl;
    }
    else{
        cout<<"Cannot vote"<<endl;
    }
}