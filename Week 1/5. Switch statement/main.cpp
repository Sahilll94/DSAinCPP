#include <iostream>
using namespace std;

int main() {
    char grade;
    cout<<"Enter your grade:";
    cin>>grade;

    // if(grade=='A'){
    //     cout<<"You marks must be in between 90-100"<<endl;
    // }

    // if(grade=='B'){
    //     cout<<"You marks must be in between 80-90"<<endl;
    // }

    // if(grade=='C'){
    //     cout<<"You marks must be in between 70-80"<<endl;
    // }

    // if(grade=='D'){
    //     cout<<"You marks must be in between 60-70"<<endl;
    // }
    // else{
    //     cout<<"You need to score well!"<<endl;
    //    }

    //Never forget to add BREAK after every cases

    switch (grade){
        case 'A':
        cout<<"You marks must be in between 90-100"<<endl;
        break;

        case 'B':
        cout<<"You marks must be in between 80-90"<<endl;
        break;

        case 'C':
        cout<<"You marks must be in between 70-80"<<endl;
        break;

        case 'D':
        cout<<"You marks must be in between 60-70"<<endl;
        break;

        default:
        cout<<"You need to score well!"<<endl;
    }

    return 0;
}