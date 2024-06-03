#include<iostream>
using namespace std;

int main()
{
    bool cond1=true;
    bool cond2=true;
    bool cond3=false;


    //LOGICAL AND OPERATOR &&
    // if(cond1 && cond2 && cond3){
    //     cout<<"All condition are true"<<endl;
    // }
    // else{
    //     cout<<"All conditions are not true"<<endl;
    // }

    //LOGICAL OR OPERATOR ||
    // if(cond1 || cond2 || cond3)
    // {
    //     cout<<"one of the condition is true";
        
    // }
    // else{
    //     cout<<"All are false"<<endl;
    // }

    //LOGICAL NOT OPERATOR !
    int C=(5!=10);
    cout<<C<<endl; //output will be TRUE as 5 is not equal to 10
    cout<<!C<<endl; //output will be FALSE as we have used NOT ! operator which will give the opposite answer

}