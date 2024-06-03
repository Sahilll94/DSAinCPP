#include <iostream>
using namespace std;


int main() {

    //IF STATEMENT OVERVIEW
    // int budget;
    // cout<<"Enter your bugdet: ";
    // cin>>budget;

    // if(budget>200000)
    // {
    //     cout<<"You can buy the scorpio"<<endl;
    // }

    // else
    // {
    //     cout<<"You can't buy the scorpio"<<endl;
    // }

    //IF ELSE STATEMENT OVERVIEW
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // if(age>=18)
    // {
    //     cout<<"You can vote"<<endl;
    // }

    // else
    // {
    //     cout<<"You can't vote"<<endl;
    // }

    // int marks;
    // cout<<"Enter your marks: ";
    // cin>>marks;
    // if(marks>90)
    // {
    //     cout<<"You scored: O";
    // }
    // else if(marks>80)
    // {
    //     cout<<"You scored: A+";
    // }
    // else if(marks>70)
    // {
    //     cout<<"You scored: A";
    // }

    //THIS IS IF-ELSE IF-ELSE Statements
    // else{
    //     cout<<"You need to work on yourself";
    // }


    //NESTED IF STATEMENT
    int weight;
    cout<<"Enter your weight:";
    cin>>weight;

    int height;
    cout<<"Enter your height:";
    cin>>height;

    if(height>180)
    {
        if(weight>80)
        {
            cout<<"You are under BMI"<<endl;
        }
        else
        {
            cout<<"You need to work on yourself"<<endl;
        }
    }
    else
    {
        cout<<"Enter a valid height or weight"<<endl;
    }



    return 0;
}