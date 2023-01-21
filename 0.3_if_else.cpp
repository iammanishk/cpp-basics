#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the value of a\n";
    cin>>a;

    // if (a>0)
    // {
    //     cout<<"a is positive\n";
    // }
    // else{
    //     cout<<"a is negative\n";
    // }
    
    if (a>0)
    {
        cout<<"a is greater than 0\n";
    }
    else if(a == 0)
    {
        cout<<"a is equal to zero\n";
    }
    else
    {
        cout<<"a is less than zero\n";
    }
    
    return 0;
}