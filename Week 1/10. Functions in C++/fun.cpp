//YOU CAN'T CALL INT MAIN() IN AN ANOTHER FUNCTION

#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello brother!"<<endl;
}

int print()
{
    main;
}