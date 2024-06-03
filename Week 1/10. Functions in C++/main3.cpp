#include <iostream>
using namespace std;

int multiplication (int x, int y, int z)    //INPUT PARAMETER and FORMAL PARAMETERS
{
    int result = x*y*z;
    return result;
}
int main()
{
    int a;
    cout<<"Enter number 1:";
    cin>>a;

    int b;
    cout<<"Enter number 2:";
    cin>>b;

    int c;
    cout<<"Enter number 3:";
    cin>>c;

    int answer;
    answer= multiplication(a,b,c); //ARGUMENTS and ACTUAL PARAMETERS
    cout<<"The multiplication of the numbers is:"<<answer<<endl;

}