//It is given an array a=[1,2,3,4,5]; now the AP formula is n/2(A+L) where n=number of terms, A=first term, L=Last term;

#include<iostream>
using namespace std;


int AP(int n,int a, int l){
    int key= n*(a+l)/2;
    return key;
}

int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;

    int a;
    cout<<"Enter the first number: ";
    cin>>a;

    int l;
    cout<<"Enter the last number: ";
    cin>>l;

    int answer=AP(n,a,l);
    cout<<"The Arithematic progression of given numbers is: "<<answer;

}